//
//  graph.cpp
//  graph_algorithms
//
//  Created by Welsh, Ivan on 27/09/16.
//  Copyright © 2016 Welsh, Ivan. All rights reserved.
//

#include "graph.hpp"
#include <boost/graph/adjacency_list.hpp>

using namespace std;
namespace mrsuper {

// Get vertex with idx n
pair<Vertex, bool> Graph::vertex(int n) {
    Vertex v = nullptr;
    bool matching = false;
    pair<VertexIt, VertexIt> vp;
    for (vp = vertices(); vp.first != vp.second; ++vp.first) {
        v = *vp.first;
        if (graph[v].idx == n) {
            matching = true;
            break;
        }
    }
    return make_pair(v, matching);
}

// Get edge between vertices with idxs n and m
pair<Edge, bool> Graph::edge(int n, int m) {
    pair<pair<Vertex, Vertex>, bool> verts = get_vertex_pair(m, n);
    bool exist = verts.second;
    pair<Vertex, Vertex> vp = verts.first;
    if (exist) {
        return boost::edge(vp.first, vp.second, graph);
    }
    else {
        pair<EdgeIt, EdgeIt> ep = edges();
        return make_pair(*ep.first, false);
    }
}

// Add an edge between vertices u and v. If such an edge already exists,
// the return pair contains it and no new edge is made.
pair<Edge, bool> Graph::add_edge(Vertex u, Vertex v) {
    pair<Edge, bool> ep = edge(u, v);
    if (!ep.second) {
        ep = boost::add_edge(u, v, graph);
    }
    return ep;
}

// Add an edge between vertices u and v with properties p. If an edge already
// exists, the edge properties are changed to p.
pair<Edge, bool> Graph::add_edge(Vertex u, Vertex v, EdgeProperties p) {
    pair<Edge, bool> ep = edge(u, v);
    if (!ep.second) {
        ep = boost::add_edge(u, v, p, graph);
    }
    else {
        graph[ep.first] = p;
    }
    return ep;
}

// Add an edge between vertices with idxs n and m. If an edge already exists,
// the return pair contains it and no new edge is made. If vertices with idxs
// n and m do not exists, the return pair is an arbitrary edge and false.
pair<Edge, bool> Graph::add_edge(int n, int m) {
    pair<pair<Vertex, Vertex>, bool> verts = get_vertex_pair(m, n);
    bool exist = verts.second;
    pair<Vertex, Vertex> vp = verts.first;
    if (exist) {
        return add_edge(vp.first, vp.second);
    }
    else {
        pair<EdgeIt, EdgeIt> ep = edges();
        return make_pair(*ep.first, false);
    }
}

// Add an edge between vertice with idxs n and m with properties p. If an edge already exists,
// the return pair contains it and no new edge is made, but the properties are.
// changed to p. If vertices with idxs
// n and m do not exists, the return pair is an arbitrary edge and false.
pair<Edge, bool> Graph::add_edge(int n, int m, EdgeProperties p) {
    pair<pair<Vertex, Vertex>, bool> verts = get_vertex_pair(m, n);
    bool exist = verts.second;
    pair<Vertex, Vertex> vp = verts.first;
    if (exist) {
        return add_edge(vp.first, vp.second, p);
    }
    else {
        pair<EdgeIt, EdgeIt> ep = edges();
        return make_pair(*ep.first, false);
    }
}

// Get pair of vertices with idxs n and m
pair<pair<Vertex, Vertex>, bool> Graph::get_vertex_pair(int n, int m) {
    Vertex u =nullptr, v = nullptr;
    bool match_n = false, match_m = false;
    pair<VertexIt, VertexIt> vp;
    for (vp = vertices(); vp.first != vp.second; ++vp.first) {
        if (!match_n) {
            u = *vp.first;
            if (graph[u].idx == n) {
                match_n = true;
            }
        }
        if (!match_m) {
            v = *vp.first;
            if (graph[v].idx == m) {
                match_m = true;
            }
        }
        if (match_m && match_n) {
            break;
        }
    }
    
    pair<Vertex, Vertex> verts = make_pair(u, v);
    return make_pair(verts, match_n && match_m);
}
} // end namespace mrsuper