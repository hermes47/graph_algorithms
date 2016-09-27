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
#include "graph.hpp"

namespace mrsuper {
    void connected_subgraphs(Graph* G, std::vector<Vertex> bag,
                                    std::vector<Vertex> g, std::vector<Vertex> nbrs,
                                                      int minsize, int maxsize);
}

#endif /* algorithms_hpp */
