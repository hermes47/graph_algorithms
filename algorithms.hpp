//
//  algorithms.hpp
//  graph_algorithms
//
//  Created by Welsh, Ivan on 27/09/16.
//  Copyright © 2016 Welsh, Ivan. All rights reserved.
//

#ifndef algorithms_hpp
#define algorithms_hpp

#include <vector>
#include <list>
#include <array>
#include <bitset>
#include <iterator>
#include "graph.hpp"
#include "constants.hpp"

namespace mrsuper {

    std::vector<Vertex> bitset_to_vertices(std::bitset<MAXIMUM_ARRAY_SIZE>* subG, std::array<Vertex, MAXIMUM_ARRAY_SIZE>* vertex_array);
    
    void connected_subgraphs(Graph* G, std::bitset<MAXIMUM_ARRAY_SIZE> bag,
                              std::bitset<MAXIMUM_ARRAY_SIZE> g,
                              std::bitset<MAXIMUM_ARRAY_SIZE> nbrs,
                              std::array<Vertex, MAXIMUM_ARRAY_SIZE>* vertex_array,
                             int minsize, int maxsize, std::back_insert_iterator<std::vector<std::bitset<MAXIMUM_ARRAY_SIZE> > > subGs);
}

#endif /* algorithms_hpp */
