//
//  algorithms.cpp
//  graph_algorithms
//
//  Created by Welsh, Ivan on 27/09/16.
//  Copyright © 2016 Welsh, Ivan. All rights reserved.
//

#include "algorithms.hpp"
#include "graph.hpp"
#include <set>
#include <vector>
#include <list>
#include <tuple>
#include <stack>
#include <algorithm>
#include <iostream>

using namespace std;

namespace mrsuper {
    int weight(Graph* G, vector<Vertex> g) {
        int w = 0;
        vector<Vertex>::iterator g_it = g.begin();
        for (; g_it != g.end(); ++g_it) {
            VertexProperties p = G->properties(*g_it);
            w += p.weight;
        }
        return w;
    }
    
    
    
    void connected_subgraphs(Graph* G, vector<Vertex> bag, vector<Vertex> g, vector<Vertex> nbrs,
                                            int minsize, int maxsize) {
        
        list<vector<Vertex>> subGs;
        // All future combinations of things should be in sorted order
        sort(bag.begin(), bag.end());
        sort(g.begin(), g.end());
        sort(nbrs.begin(), nbrs.end());
        
        stack<vector<Vertex>> bag_s;
        stack<vector<Vertex>> g_s;
        stack<vector<Vertex>> nbrs_s;
        bag_s.push(bag);
        g_s.push(g);
        nbrs_s.push(nbrs);
        
        while (!bag_s.empty()) {
            bag = bag_s.top();
            bag_s.pop();
            g = g_s.top();
            g_s.pop();
            nbrs = nbrs_s.top();
            nbrs_s.pop();
            
            unsigned long count = bag.size();

            vector<Vertex> poss(count);
            vector<Vertex>::iterator poss_it;
            
            if (g.empty()) {
                poss = bag;
            }
            else {
                poss_it = set_intersection(bag.begin(), bag.end(), nbrs.begin(), nbrs.end(), poss.begin());
                poss.resize(poss_it - poss.begin());
            }
            
            int g_weight = weight(G, g);
            
            if (poss.empty() && !g.empty() && maxsize >= g_weight && g_weight >= minsize) {
                subGs.push_back(g);
            } else if (!poss.empty()) {
                if (g_weight <= maxsize) {
                    Vertex v = *min_element(poss.begin(), poss.end());
                    
                    vector<Vertex> v_vec {v};
                    
                    vector<Vertex> neighbours_vec;
                    pair<NeighboursIt, NeighboursIt> np = G->neighbours(v);
                    for (; np.first != np.second; ++np.first) {
                        neighbours_vec.push_back(*np.first);
                    }
                    sort(neighbours_vec.begin(), neighbours_vec.end());
                    
                    vector<Vertex> bag_minus_v(bag.size() -1);
                    vector<Vertex> g_union_v(g.size() +1);
                    vector<Vertex> nbrs_union_neighbours(nbrs.size() + neighbours_vec.size());
                    
                    poss_it = set_difference(bag.begin(), bag.end(), v_vec.begin(), v_vec.end(), bag_minus_v.begin());
                    bag_minus_v.resize(poss_it - bag_minus_v.begin());
                    
                    poss_it = set_union(g.begin(), g.end(), v_vec.begin(), v_vec.end(), g_union_v.begin());
                    g_union_v.resize(poss_it - g_union_v.begin());
                    
                    poss_it = set_union(nbrs.begin(), nbrs.end(), neighbours_vec.begin(), neighbours_vec.end(), nbrs_union_neighbours.begin());
                    nbrs_union_neighbours.resize(poss_it - nbrs_union_neighbours.begin());
                    
                    bag_s.push(bag_minus_v);
                    bag_s.push(bag_minus_v);
                    
                    g_s.push(g);
                    g_s.push(g_union_v);
                    
                    nbrs_s.push(nbrs);
                    nbrs_s.push(nbrs_union_neighbours);
                    

                } else if (maxsize >= g_weight && g_weight >= minsize) {
                    subGs.push_back(g);
                }
            }
        }
        
        cout << "There are " << subGs.size() << " connected subgraphs found.\n";
        /*for (vector<vector<Vertex>>::iterator it = subGs.begin(); it != subGs.end(); ++it) {
            vector<Vertex> sub = *it;
            for (vector<Vertex>::iterator it2 = sub.begin(); it2 != sub.end(); ++it2) {
                Vertex v = *it2;
                VertexProperties p = G.properties(v);
                cout << " " << p.idx;
            }
            cout << "\n";
        }
         */
        
    }
}