//
//  main.cpp
//  graph_algorithms
//
//  Created by Welsh, Ivan on 27/09/16.
//  Copyright © 2016 Welsh, Ivan. All rights reserved.
//

#include "graph.hpp"
#include "algorithms.hpp"
#include <iostream>
#include <vector>
#include <chrono>

using namespace mrsuper;



Graph build(){
    std::chrono::high_resolution_clock::time_point start_time = std::chrono::high_resolution_clock::now();
    Graph g{};
    VertexProperties p1;
    p1.idx = 1;
    g.add_vertex(p1);
    
    VertexProperties p2;
    p2.idx = 2;
    g.add_vertex(p2);
    
    VertexProperties p3;
    p3.idx = 3;
    g.add_vertex(p3);
    
    VertexProperties p4;
    p4.idx = 4;
    g.add_vertex(p4);
    
    VertexProperties p5;
    p5.idx = 5;
    g.add_vertex(p5);
    
    VertexProperties p6;
    p6.idx = 6;
    g.add_vertex(p6);
    
    VertexProperties p7;
    p7.idx = 7;
    g.add_vertex(p7);
    
    VertexProperties p8;
    p8.idx = 8;
    g.add_vertex(p8);
    
    VertexProperties p9;
    p9.idx = 9;
    g.add_vertex(p9);
    
    VertexProperties p10;
    p10.idx = 10;
    g.add_vertex(p10);
    
    VertexProperties p11;
    p11.idx = 11;
    g.add_vertex(p11);
    
    VertexProperties p12;
    p12.idx = 12;
    g.add_vertex(p12);
    
    VertexProperties p13;
    p13.idx = 13;
    g.add_vertex(p13);
    
    VertexProperties p14;
    p14.idx = 14;
    g.add_vertex(p14);
    
    VertexProperties p15;
    p15.idx = 15;
    g.add_vertex(p15);
    
    VertexProperties p16;
    p16.idx = 16;
    g.add_vertex(p16);
    
    VertexProperties p17;
    p17.idx = 17;
    g.add_vertex(p17);
    
    VertexProperties p18;
    p18.idx = 18;
    g.add_vertex(p18);
    
    VertexProperties p19;
    p19.idx = 19;
    g.add_vertex(p19);
    
    VertexProperties p20;
    p20.idx = 20;
    g.add_vertex(p20);
    
    VertexProperties p21;
    p21.idx = 21;
    g.add_vertex(p21);
    
    VertexProperties p22;
    p22.idx = 22;
    g.add_vertex(p22);
    
    VertexProperties p23;
    p23.idx = 23;
    g.add_vertex(p23);
    
    VertexProperties p24;
    p24.idx = 24;
    g.add_vertex(p24);
    
    VertexProperties p25;
    p25.idx = 25;
    g.add_vertex(p25);
    
    VertexProperties p26;
    p26.idx = 26;
    g.add_vertex(p26);
    
    VertexProperties p27;
    p27.idx = 27;
    g.add_vertex(p27);
    
    VertexProperties p28;
    p28.idx = 28;
    g.add_vertex(p28);
    
    VertexProperties p29;
    p29.idx = 29;
    g.add_vertex(p29);
    
    VertexProperties p30;
    p30.idx = 30;
    g.add_vertex(p30);
    
    VertexProperties p31;
    p31.idx = 31;
    g.add_vertex(p31);
    
    VertexProperties p32;
    p32.idx = 32;
    g.add_vertex(p32);
    
    VertexProperties p33;
    p33.idx = 33;
    g.add_vertex(p33);
    
    VertexProperties p34;
    p34.idx = 34;
    g.add_vertex(p34);
    
    VertexProperties p35;
    p35.idx = 35;
    g.add_vertex(p35);
    
    g.add_edge(1, 2);
    g.add_edge(2, 3);
    g.add_edge(2, 4);
    g.add_edge(2, 5);
    g.add_edge(5, 6);
    g.add_edge(5, 7);
    g.add_edge(7, 8);
    g.add_edge(7, 9);
    g.add_edge(9, 10);
    g.add_edge(9, 11);
    g.add_edge(11, 16);
    g.add_edge(11, 12);
    g.add_edge(12, 13);
    g.add_edge(13, 25);
    g.add_edge(13, 14);
    g.add_edge(14, 16);
    g.add_edge(14, 15);
    g.add_edge(16, 17);
    g.add_edge(17, 18);
    g.add_edge(17, 19);
    g.add_edge(19, 20);
    g.add_edge(19, 21);
    g.add_edge(21, 24);
    g.add_edge(21, 22);
    g.add_edge(21, 23);
    g.add_edge(25, 26);
    g.add_edge(25, 30);
    g.add_edge(26, 27);
    g.add_edge(26, 28);
    g.add_edge(28, 34);
    g.add_edge(28, 29);
    g.add_edge(30, 32);
    g.add_edge(30, 31);
    g.add_edge(32, 33);
    g.add_edge(32, 34);
    g.add_edge(34, 35);
    std::chrono::high_resolution_clock::time_point end_time = std::chrono::high_resolution_clock::now();
    
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count();
    std::cout << "Build time: " << duration << " microseconds.\n";
    return g;
}

void check_build(Graph g) {
    std::cout << "Size: " << g.size() << ", Order: " << g.order() << "\n";
    
    std::pair<VertexIt, VertexIt> vp;
    std::cout << "Vertices:\n";
    for (vp = g.vertices(); vp.first != vp.second; ++vp.first) {
        Vertex v = *vp.first;
        VertexProperties vprop = g.properties(v);
        std::cout << "Idx: " << vprop.idx << " Neighbours: ";
        std::pair<NeighboursIt, NeighboursIt> np;
        for (np = g.neighbours(v); np.first != np.second; ++np.first) {
            VertexProperties nprop = g.properties(*np.first);
            std::cout << nprop.idx << " ";
        }
        std::cout << "\n";
    }
    
    std::pair<EdgeIt, EdgeIt> ep;
    std::cout << "Edges:\n";
    for (ep = g.edges(); ep.first != ep.second; ++ep.first) {
        Edge e = *ep.first;
        Vertex v = g.source(e);
        Vertex u = g.target(e);
        VertexProperties vprop = g.properties(v);
        EdgeProperties eprop = g.properties(e);
        std::cout << "Source: " << vprop.idx;
        vprop = g.properties(u);
        std::cout << " Target: " << vprop.idx << " Order: " << eprop.order << "\n";
    }
    
}

void check_algo_connected_subgraphs(Graph G) {

    std::vector<Vertex> bag, g, nbrs;
    std::pair<VertexIt, VertexIt> vp = G.vertices();
    for (; vp.first != vp.second; ++vp.first) {
        Vertex v = *vp.first;
        bag.push_back(v);
    }
    
    std::chrono::high_resolution_clock::time_point start_time = std::chrono::high_resolution_clock::now();
    connected_subgraphs(&G, bag, g, nbrs, 0, 10);
    std::chrono::high_resolution_clock::time_point end_time = std::chrono::high_resolution_clock::now();
    

    
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end_time - start_time).count();
    std::cout << duration << " microseconds vs ~49000 microseconds in Python.\n";
}

int main(int argc, const char * argv[]) {
    Graph g = build();
    check_algo_connected_subgraphs(g);
    return 0;
}
