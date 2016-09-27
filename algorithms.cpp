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
#include <chrono>
#include <iterator>

using namespace std;
using namespace std::chrono;

namespace mrsuper {
    int weight(Graph* G, vector<Vertex> g) {
        if (!g.size() || !G->properties(*g.begin()).weight) {
            return static_cast<int>(g.size());
        }
        else {
            int w = 0;
            vector<Vertex>::iterator g_it = g.begin();
            for (; g_it != g.end(); ++g_it) {
                VertexProperties p = G->properties(*g_it);
                w += p.weight;
            }
            return w;
        }
    }
    
    
    
    void connected_subgraphs(Graph* G, vector<Vertex> bag, vector<Vertex> g, vector<Vertex> nbrs,
                                            int minsize, int maxsize) {
        
        list<vector<Vertex>> subGs;
        nanoseconds push_time(0);
        high_resolution_clock::time_point start, end;
        // All future combinations of things should be in sorted order
        sort(bag.begin(), bag.end());
        sort(g.begin(), g.end());
        sort(nbrs.begin(), nbrs.end());
        
        cout << "Sort time: " << push_time.count() << " nanoseconds.\n";
        
        stack<vector<Vertex>> bag_s;
        stack<vector<Vertex>> g_s;
        stack<vector<Vertex>> nbrs_s;
        bag_s.push(bag);
        g_s.push(g);
        nbrs_s.push(nbrs);
        
        vector<Vertex> bag_minus_v, g_union_v, nbrs_union_neighbours;
        bag_minus_v.reserve(G->order());
        g_union_v.reserve(G->order());
        nbrs_union_neighbours.reserve(G->order());
        
        while (!bag_s.empty()) {
            bag = bag_s.top();
            bag_s.pop();
            g = g_s.top();
            g_s.pop();
            nbrs = nbrs_s.top();
            nbrs_s.pop();
            
            vector<Vertex> poss;
            
            if (g.empty()) {
                poss = bag;
            }
            else {
                set_intersection(bag.begin(), bag.end(), nbrs.begin(), nbrs.end(), back_inserter(poss));
            }
            
            int g_weight = weight(G, g);
            
            if (poss.empty() && !g.empty() && maxsize >= g_weight && g_weight >= minsize) {
                subGs.push_back(g);
            } else if (!poss.empty()) {
                if (g_weight <= maxsize) {
                    Vertex v = *min_element(poss.begin(), poss.end());
                    
                    vector<Vertex> v_vec {v};
                    
                    pair<NeighboursIt, NeighboursIt> np = G->neighbours(v);
                    vector<Vertex> neighbours_vec(np.first, np.second);
                    sort(neighbours_vec.begin(), neighbours_vec.end());
                    
                    bag_minus_v.clear();
                    g_union_v.clear();
                    nbrs_union_neighbours.clear();
                    
                    set_difference(bag.begin(), bag.end(), v_vec.begin(), v_vec.end(), back_inserter(bag_minus_v));
                    
                    set_union(g.begin(), g.end(), v_vec.begin(), v_vec.end(), back_inserter(g_union_v));
                    
                    set_union(nbrs.begin(), nbrs.end(), neighbours_vec.begin(), neighbours_vec.end(), back_inserter(nbrs_union_neighbours));
                    
                    start = high_resolution_clock::now();
                    bag_s.push(bag_minus_v);
                    bag_s.push(bag_minus_v);
                    
                    g_s.push(g);
                    g_s.push(g_union_v);
                    
                    nbrs_s.push(nbrs);
                    nbrs_s.push(nbrs_union_neighbours);
                    end = high_resolution_clock::now();
                    push_time += duration_cast<nanoseconds>(end - start);
                    

                } else if (maxsize >= g_weight && g_weight >= minsize) {
                    subGs.push_back(g);
                }
            }
        }
        
        cout << "There are " << subGs.size() << " connected subgraphs found.\n";
        cout << "Pushing onto stack time: " << push_time.count() << " nanoseconds.\n";
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