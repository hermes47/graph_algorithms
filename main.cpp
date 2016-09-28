//
//  main.cpp
//  graph_algorithms
//
//  Created by Welsh, Ivan on 27/09/16.
//  Copyright © 2016 Welsh, Ivan. All rights reserved.
//

#include "graph.hpp"
#include "algorithms.hpp"
#include "constants.hpp"
#include <iostream>
#include <vector>
#include <chrono>
#include <iterator>
#include <bitset>

using namespace mrsuper;

Graph build_big(){
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
    
    
    VertexProperties p36;
    p36.idx = 36;
    g.add_vertex(p36);
    
    
    VertexProperties p37;
    p37.idx = 37;
    g.add_vertex(p37);
    
    
    VertexProperties p38;
    p38.idx = 38;
    g.add_vertex(p38);
    
    
    VertexProperties p39;
    p39.idx = 39;
    g.add_vertex(p39);
    
    
    VertexProperties p40;
    p40.idx = 40;
    g.add_vertex(p40);
    
    
    VertexProperties p41;
    p41.idx = 41;
    g.add_vertex(p41);
    
    
    VertexProperties p42;
    p42.idx = 42;
    g.add_vertex(p42);
    
    
    VertexProperties p43;
    p43.idx = 43;
    g.add_vertex(p43);
    
    
    VertexProperties p44;
    p44.idx = 44;
    g.add_vertex(p44);
    
    
    VertexProperties p45;
    p45.idx = 45;
    g.add_vertex(p45);
    
    
    VertexProperties p46;
    p46.idx = 46;
    g.add_vertex(p46);
    
    
    VertexProperties p47;
    p47.idx = 47;
    g.add_vertex(p47);
    
    
    VertexProperties p48;
    p48.idx = 48;
    g.add_vertex(p48);
    
    
    VertexProperties p49;
    p49.idx = 49;
    g.add_vertex(p49);
    
    
    VertexProperties p50;
    p50.idx = 50;
    g.add_vertex(p50);
    
    
    VertexProperties p51;
    p51.idx = 51;
    g.add_vertex(p51);
    
    
    VertexProperties p52;
    p52.idx = 52;
    g.add_vertex(p52);
    
    
    VertexProperties p53;
    p53.idx = 53;
    g.add_vertex(p53);
    
    
    VertexProperties p54;
    p54.idx = 54;
    g.add_vertex(p54);
    
    
    VertexProperties p55;
    p55.idx = 55;
    g.add_vertex(p55);
    
    
    VertexProperties p56;
    p56.idx = 56;
    g.add_vertex(p56);
    
    
    VertexProperties p57;
    p57.idx = 57;
    g.add_vertex(p57);
    
    
    VertexProperties p58;
    p58.idx = 58;
    g.add_vertex(p58);
    
    
    VertexProperties p59;
    p59.idx = 59;
    g.add_vertex(p59);
    
    
    VertexProperties p60;
    p60.idx = 60;
    g.add_vertex(p60);
    
    
    VertexProperties p61;
    p61.idx = 61;
    g.add_vertex(p61);
    
    
    VertexProperties p62;
    p62.idx = 62;
    g.add_vertex(p62);
    
    
    VertexProperties p63;
    p63.idx = 63;
    g.add_vertex(p63);
    
    
    VertexProperties p64;
    p64.idx = 64;
    g.add_vertex(p64);
    
    
    VertexProperties p65;
    p65.idx = 65;
    g.add_vertex(p65);
    
    
    VertexProperties p66;
    p66.idx = 66;
    g.add_vertex(p66);
    
    
    VertexProperties p67;
    p67.idx = 67;
    g.add_vertex(p67);
    
    
    VertexProperties p68;
    p68.idx = 68;
    g.add_vertex(p68);
    
    
    VertexProperties p69;
    p69.idx = 69;
    g.add_vertex(p69);
    
    
    VertexProperties p70;
    p70.idx = 70;
    g.add_vertex(p70);
    
    
    VertexProperties p71;
    p71.idx = 71;
    g.add_vertex(p71);
    
    
    VertexProperties p72;
    p72.idx = 72;
    g.add_vertex(p72);
    
    
    VertexProperties p73;
    p73.idx = 73;
    g.add_vertex(p73);
    
    
    VertexProperties p74;
    p74.idx = 74;
    g.add_vertex(p74);
    
    
    VertexProperties p75;
    p75.idx = 75;
    g.add_vertex(p75);
    
    
    VertexProperties p76;
    p76.idx = 76;
    g.add_vertex(p76);
    
    
    VertexProperties p77;
    p77.idx = 77;
    g.add_vertex(p77);
    
    
    VertexProperties p78;
    p78.idx = 78;
    g.add_vertex(p78);
    
    
    VertexProperties p79;
    p79.idx = 79;
    g.add_vertex(p79);
    
    
    VertexProperties p80;
    p80.idx = 80;
    g.add_vertex(p80);
    
    
    VertexProperties p81;
    p81.idx = 81;
    g.add_vertex(p81);
    
    
    VertexProperties p82;
    p82.idx = 82;
    g.add_vertex(p82);
    
    
    VertexProperties p83;
    p83.idx = 83;
    g.add_vertex(p83);
    
    
    VertexProperties p84;
    p84.idx = 84;
    g.add_vertex(p84);
    
    
    VertexProperties p85;
    p85.idx = 85;
    g.add_vertex(p85);
    
    
    VertexProperties p86;
    p86.idx = 86;
    g.add_vertex(p86);
    
    
    VertexProperties p87;
    p87.idx = 87;
    g.add_vertex(p87);
    
    
    VertexProperties p88;
    p88.idx = 88;
    g.add_vertex(p88);
    
    
    VertexProperties p89;
    p89.idx = 89;
    g.add_vertex(p89);
    
    
    VertexProperties p90;
    p90.idx = 90;
    g.add_vertex(p90);
    
    
    VertexProperties p91;
    p91.idx = 91;
    g.add_vertex(p91);
    
    
    VertexProperties p92;
    p92.idx = 92;
    g.add_vertex(p92);
    
    
    VertexProperties p93;
    p93.idx = 93;
    g.add_vertex(p93);
    
    
    VertexProperties p94;
    p94.idx = 94;
    g.add_vertex(p94);
    
    
    VertexProperties p95;
    p95.idx = 95;
    g.add_vertex(p95);
    
    
    VertexProperties p96;
    p96.idx = 96;
    g.add_vertex(p96);
    
    
    VertexProperties p97;
    p97.idx = 97;
    g.add_vertex(p97);
    
    
    VertexProperties p98;
    p98.idx = 98;
    g.add_vertex(p98);
    
    
    VertexProperties p99;
    p99.idx = 99;
    g.add_vertex(p99);
    
    
    VertexProperties p100;
    p100.idx = 100;
    g.add_vertex(p100);
    
    
    VertexProperties p101;
    p101.idx = 101;
    g.add_vertex(p101);
    
    
    VertexProperties p102;
    p102.idx = 102;
    g.add_vertex(p102);
    
    
    VertexProperties p103;
    p103.idx = 103;
    g.add_vertex(p103);
    
    
    VertexProperties p104;
    p104.idx = 104;
    g.add_vertex(p104);
    
    
    VertexProperties p105;
    p105.idx = 105;
    g.add_vertex(p105);
    
    
    VertexProperties p106;
    p106.idx = 106;
    g.add_vertex(p106);
    
    
    VertexProperties p107;
    p107.idx = 107;
    g.add_vertex(p107);
    
    
    VertexProperties p108;
    p108.idx = 108;
    g.add_vertex(p108);
    
    
    VertexProperties p109;
    p109.idx = 109;
    g.add_vertex(p109);
    
    
    VertexProperties p110;
    p110.idx = 110;
    g.add_vertex(p110);
    
    
    VertexProperties p111;
    p111.idx = 111;
    g.add_vertex(p111);
    
    
    VertexProperties p112;
    p112.idx = 112;
    g.add_vertex(p112);
    
    
    VertexProperties p113;
    p113.idx = 113;
    g.add_vertex(p113);
    
    
    VertexProperties p114;
    p114.idx = 114;
    g.add_vertex(p114);
    
    
    VertexProperties p115;
    p115.idx = 115;
    g.add_vertex(p115);
    
    
    VertexProperties p116;
    p116.idx = 116;
    g.add_vertex(p116);
    
    
    VertexProperties p117;
    p117.idx = 117;
    g.add_vertex(p117);
    
    
    VertexProperties p118;
    p118.idx = 118;
    g.add_vertex(p118);
    
    
    VertexProperties p119;
    p119.idx = 119;
    g.add_vertex(p119);
    
    
    VertexProperties p120;
    p120.idx = 120;
    g.add_vertex(p120);
    
    
    g.add_edge(1, 2);
    g.add_edge(2, 3);
    g.add_edge(3, 4);
    g.add_edge(3, 5);
    g.add_edge(5, 33);
    g.add_edge(5, 117);
    g.add_edge(5, 6);
    g.add_edge(6, 8);
    g.add_edge(6, 9);
    g.add_edge(6, 7);
    g.add_edge(9, 25);
    g.add_edge(9, 10);
    g.add_edge(9, 11);
    g.add_edge(11, 12);
    g.add_edge(11, 14);
    g.add_edge(12, 113);
    g.add_edge(12, 13);
    g.add_edge(14, 19);
    g.add_edge(14, 36);
    g.add_edge(14, 15);
    g.add_edge(15, 16);
    g.add_edge(15, 17);
    g.add_edge(15, 18);
    g.add_edge(19, 22);
    g.add_edge(19, 20);
    g.add_edge(19, 21);
    g.add_edge(22, 24);
    g.add_edge(22, 25);
    g.add_edge(22, 23);
    g.add_edge(25, 26);
    g.add_edge(25, 30);
    g.add_edge(26, 27);
    g.add_edge(26, 28);
    g.add_edge(26, 29);
    g.add_edge(30, 32);
    g.add_edge(30, 33);
    g.add_edge(30, 31);
    g.add_edge(33, 34);
    g.add_edge(33, 35);
    g.add_edge(36, 41);
    g.add_edge(36, 115);
    g.add_edge(36, 37);
    g.add_edge(37, 40);
    g.add_edge(37, 38);
    g.add_edge(37, 39);
    g.add_edge(41, 44);
    g.add_edge(41, 42);
    g.add_edge(41, 43);
    g.add_edge(44, 45);
    g.add_edge(44, 46);
    g.add_edge(44, 47);
    g.add_edge(47, 48);
    g.add_edge(47, 49);
    g.add_edge(47, 62);
    g.add_edge(49, 50);
    g.add_edge(49, 115);
    g.add_edge(49, 54);
    g.add_edge(50, 51);
    g.add_edge(50, 52);
    g.add_edge(50, 53);
    g.add_edge(54, 56);
    g.add_edge(54, 57);
    g.add_edge(54, 55);
    g.add_edge(57, 58);
    g.add_edge(57, 59);
    g.add_edge(57, 60);
    g.add_edge(60, 61);
    g.add_edge(60, 62);
    g.add_edge(60, 71);
    g.add_edge(62, 67);
    g.add_edge(62, 63);
    g.add_edge(63, 64);
    g.add_edge(63, 65);
    g.add_edge(63, 66);
    g.add_edge(67, 70);
    g.add_edge(67, 68);
    g.add_edge(67, 69);
    g.add_edge(71, 72);
    g.add_edge(72, 73);
    g.add_edge(72, 74);
    g.add_edge(72, 77);
    g.add_edge(74, 75);
    g.add_edge(75, 89);
    g.add_edge(75, 76);
    g.add_edge(75, 109);
    g.add_edge(77, 85);
    g.add_edge(77, 78);
    g.add_edge(77, 79);
    g.add_edge(79, 80);
    g.add_edge(80, 81);
    g.add_edge(80, 82);
    g.add_edge(80, 93);
    g.add_edge(82, 83);
    g.add_edge(83, 105);
    g.add_edge(83, 84);
    g.add_edge(83, 101);
    g.add_edge(85, 89);
    g.add_edge(85, 86);
    g.add_edge(85, 87);
    g.add_edge(87, 88);
    g.add_edge(89, 91);
    g.add_edge(89, 90);
    g.add_edge(91, 92);
    g.add_edge(93, 97);
    g.add_edge(93, 94);
    g.add_edge(93, 95);
    g.add_edge(95, 96);
    g.add_edge(97, 98);
    g.add_edge(97, 99);
    g.add_edge(97, 101);
    g.add_edge(99, 100);
    g.add_edge(101, 102);
    g.add_edge(101, 103);
    g.add_edge(103, 104);
    g.add_edge(105, 107);
    g.add_edge(105, 106);
    g.add_edge(107, 108);
    g.add_edge(109, 110);
    g.add_edge(109, 111);
    g.add_edge(111, 112);
    g.add_edge(113, 114);
    g.add_edge(113, 115);
    g.add_edge(115, 116);
    g.add_edge(117, 120);
    g.add_edge(117, 118);
    g.add_edge(117, 119);
    return g;
}

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
    
    std::bitset<MAXIMUM_ARRAY_SIZE> bag, g, nbrs;
    std::array<Vertex, MAXIMUM_ARRAY_SIZE> vertex_array;
    std::vector<std::bitset<MAXIMUM_ARRAY_SIZE> > subGs;
    std::back_insert_iterator<std::vector<std::bitset<MAXIMUM_ARRAY_SIZE> > > it(subGs);
    bag.reset();
    g.reset();
    nbrs.reset();
    std::pair<VertexIt, VertexIt> vp = G.vertices();
    for (int count = 0; vp.first != vp.second; ++vp.first, ++count) {
        Vertex v = *vp.first;
        bag[count] = 1;
        vertex_array[count] = v;
    }
    
    std::chrono::high_resolution_clock::time_point start_time = std::chrono::high_resolution_clock::now();
    connected_subgraphs(&G, bag, g, nbrs, &vertex_array, 5, 10, it);
    std::chrono::high_resolution_clock::time_point end_time = std::chrono::high_resolution_clock::now();
    
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();
    std::cout << duration << " milliseconds vs 6360 milliseconds in Python for bitsets.\n";
    std::cout << subGs.size() << " sub graphs found.\n";
    
    for (auto iter = subGs.begin(); iter != subGs.end(); ++iter) {
        bitset_to_vertices(&(*iter), &vertex_array);
    }
    end_time = std::chrono::high_resolution_clock::now();
    duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();
    std::cout << duration << " milliseconds total run time vs 5392 milliseconds in python.\n";
    
}



int main(int argc, const char * argv[]) {
    Graph g = build_big();
    check_algo_connected_subgraphs(g);
    //check_fixed_set_intersection(g);
    return 0;
}
