//
//  algorithms.cpp
//  graph_algorithms
//
//  Created by Welsh, Ivan on 27/09/16.
//  Copyright © 2016 Welsh, Ivan. All rights reserved.
//

#include "algorithms.hpp"
#include "graph.hpp"
#include "constants.hpp"
#include <vector>
#include <list>
#include <stack>
#include <algorithm>
#include <bitset>

using namespace std;

namespace mrsuper {
    
    int weight(Graph* G, bitset<MAXIMUM_ARRAY_SIZE>* g, array<Vertex, MAXIMUM_ARRAY_SIZE>* vertex_array) {
        if (g->count() == 0 || !G->properties(vertex_array->at(0)).weight) {
            return static_cast<int>(g->count());
        } else {
            int w = 0;
            for (int i = 0; i < G->order(); ++i) {
                if (g->test(i)) {
                    w += G->properties(vertex_array->at(i)).weight;
                }
            }
            return w;
        }
    }
    
    int min_bitset(bitset<MAXIMUM_ARRAY_SIZE>* bs) {
        for (int i = 0; i < MAXIMUM_ARRAY_SIZE; ++i) {
            if (bs->test(i)) {
                return i;
            }
        }
        return -1;
    }
    
    vector<Vertex> bitset_to_vertices(bitset<MAXIMUM_ARRAY_SIZE>* subG, array<Vertex, MAXIMUM_ARRAY_SIZE>* vertex_array) {
        vector<Vertex> vertices;
        vertices.reserve(subG->count());
#if (defined(__GNUC__) || defined(__GNUG__)) && !(defined(__clang__) || defined(__INTEL_COMPILER))
        for (int i = subG->_Find_first(); i < subG->size(); i = subG->_Find_next(i)) {
            vertices.push_back(vertex_array->at(i));
        }
#else
        for (int i = 0; i < MAXIMUM_ARRAY_SIZE; ++i) {
            if (subG->test(i)) {
                vertices.push_back(vertex_array->at(i));
            }
        }
#endif
        return vertices;
    }
    
    void connected_subgraphs(Graph* G, bitset<MAXIMUM_ARRAY_SIZE> bag,
                              bitset<MAXIMUM_ARRAY_SIZE> g,
                              bitset<MAXIMUM_ARRAY_SIZE> nbrs, array<Vertex, MAXIMUM_ARRAY_SIZE>* vertex_array,
                             int minsize, int maxsize, back_insert_iterator<vector<bitset<MAXIMUM_ARRAY_SIZE> > > subGs) {
        
        stack<bitset<MAXIMUM_ARRAY_SIZE> > bag_s;
        stack<bitset<MAXIMUM_ARRAY_SIZE> > g_s;
        stack<bitset<MAXIMUM_ARRAY_SIZE> > nbrs_s;
        
        bag_s.push(bag);
        g_s.push(g);
        nbrs_s.push(nbrs);
        
        bitset<MAXIMUM_ARRAY_SIZE> bag_minus_v, g_union_v, nbrs_union_neighbours,
                                   poss, v_vec, neighbours_vec;
        
        bag_minus_v.reset();
        g_union_v.reset();
        nbrs_union_neighbours.reset();
        poss.reset();
        v_vec.reset();
        neighbours_vec.reset();
        
        while (!bag_s.empty()) {
            bag = bag_s.top();
            bag_s.pop();
            
            g = g_s.top();
            g_s.pop();
            
            nbrs = nbrs_s.top();
            nbrs_s.pop();
            
            if (g.count() == 0) {
                poss = bag;
            }
            else {
                poss = bag & nbrs;
            }
            
            int g_weight = weight(G, &g, vertex_array);

            if (poss.count() == 0 && g.count() != 0 && maxsize >= g_weight && g_weight >= minsize) {
                subGs = g;
                //subGs.push_back(g);
            } else if (poss.count() != 0) {
                if (g_weight <= maxsize) {
#if (defined(__GNUC__) || defined(__GNUG__)) && !(defined(__clang__) || defined(__INTEL_COMPILER))
                    int j = poss._Find_first();
#else
                    int j = min_bitset(&poss);
#endif
                    Vertex v = vertex_array->at(j);
                    
                    v_vec.reset();
                    v_vec[j] = 1;
                    
                    pair<NeighboursIt, NeighboursIt> np = G->neighbours(v);
                    neighbours_vec.reset();
                    for (; np.first != np.second; ++np.first) {
                        auto pos = find(vertex_array->begin(), vertex_array->begin() + G->order(), *np.first);
                        if (pos != vertex_array->begin() + G->order()) {
                            int idx = static_cast<int>(distance(vertex_array->begin(), pos));
                            neighbours_vec[idx] = 1;
                        }
                    }
                    
                    bag_minus_v.reset();
                    g_union_v.reset();
                    nbrs_union_neighbours.reset();
                    
                    bag_minus_v = (bag ^ v_vec) & bag;
                    g_union_v = g | v_vec;
                    nbrs_union_neighbours = nbrs | neighbours_vec;
                    
                    bag_s.push(bag_minus_v);
                    bag_s.push(bag_minus_v);
                    
                    g_s.push(g);
                    g_s.push(g_union_v);
                    
                    nbrs_s.push(nbrs);
                    nbrs_s.push(nbrs_union_neighbours);
                    
                    
                } else if (maxsize >= g_weight && g_weight >= minsize) {
                    subGs = g;
                    //subGs.push_back(g);
                }
            }
        }
        
    }
    
} // end namespace mrsuper