//
//  graph.hpp
//  graph_algorithms
//
//  Created by Welsh, Ivan on 27/09/16.
//  Copyright © 2016 Welsh, Ivan. All rights reserved.
//

#include <string>

#include <boost/graph/adjacency_list.hpp>

#ifndef graph_hpp
#define graph_hpp

namespace mrsuper {
struct VertexProperties {
    int idx;
    int weight = 1;
};

struct EdgeProperties {
    int order = 1;
};

struct GraphProperties {
    std::string name;
};


typedef boost::adjacency_list<boost::listS, boost::listS, boost::undirectedS,
VertexProperties, EdgeProperties, GraphProperties> _Graph;

typedef boost::graph_traits<_Graph>::vertex_descriptor Vertex;
typedef boost::graph_traits<_Graph>::vertex_iterator VertexIt;
typedef boost::graph_traits<_Graph>::edge_descriptor Edge;
typedef boost::graph_traits<_Graph>::edge_iterator EdgeIt;
typedef boost::graph_traits<_Graph>::adjacency_iterator NeighboursIt;


class Graph {
private:
    _Graph graph;

public:
    // Graph properties access
    
    // Source vertex of an edge
    inline Vertex source(Edge e) {
        return boost::source(e, graph);
    }
    
    // Target vertex of an edge
    inline Vertex target(Edge e) {
        return boost::target(e, graph);
    }
    
    // Degree of a vertex
    inline int degree(Vertex v) {
        return static_cast<int>(boost::out_degree(v, graph));
    }
    
    // Order of the graph, i.e. the number of vertices in the graph
    inline int order() {
        return static_cast<int>(boost::num_vertices(graph));
    }
    
    // Size of the graph, i.e. the number of edges in the graph
    inline int size() {
        return static_cast<int>(boost::num_edges(graph));
    }
    
    // If a vertex with index n exists, return a pair with the vertex and true.
    // If there is no such vertex, return a pair with an arbitrary vertex and false.
    std::pair<Vertex, bool> vertex(int n);
    
    // If an edge from vertex u to vertex v exists, return a pair containing the edge and true.
    // If no edge exists, return apair with an arbitrary edge and false
    inline std::pair<Edge, bool> edge(Vertex u, Vertex v) {
        return boost::edge(u, v, graph);
    }
    std::pair<Edge, bool> edge(int u, int v);
    
    // Iterator pair for the graph vertices
    inline std::pair<VertexIt, VertexIt> vertices() {
        return boost::vertices(graph);
    }
    
    // Iterator pair for the graph edges
    inline std::pair<EdgeIt, EdgeIt> edges() {
        return boost::edges(graph);
    }
    
    // Iterator pair for the neighbours of a vertex
    inline std::pair<NeighboursIt, NeighboursIt> neighbours(Vertex v) {
        return boost::adjacent_vertices(v, graph);
    }
    
    // Add a vertex to the graph
    inline Vertex add_vertex() {
        return boost::add_vertex(graph);
    }
    
    // Add a vertex to the graph with properties
    inline Vertex add_vertex(const VertexProperties properties) {
        return boost::add_vertex(properties, graph);
    }
    
    // Remove a vertex from the graph
    inline void remove_vertex(Vertex v) {
        boost::clear_vertex(v, graph);
        boost::remove_vertex(v, graph);
    }
    
    // Add an edge to the graph between vertices
    std::pair<Edge, bool> add_edge(Vertex v, Vertex u);
    
    // Add an edge to the graph between vertices with properties
    std::pair<Edge, bool> add_edge(Vertex u, Vertex v, EdgeProperties p);
    
    // Add an edge to the graph between vertices with idxs
    // If vertices with n or m do not exist, pair is arbitrary edge and false
    // otherwise new (or existing)
    std::pair<Edge, bool> add_edge(int n, int m);
    
    std::pair<Edge, bool> add_edge(int n, int m, EdgeProperties p);
    
    inline VertexProperties properties(Vertex v) {
        return graph[v];
    }
    
    inline EdgeProperties properties(Edge e) {
        return graph[e];
    }
    
private:
    std::pair<std::pair<Vertex, Vertex>, bool> get_vertex_pair(int u, int v);
    
};

} // end namespace mrsuper

#endif /* graph_hpp */
