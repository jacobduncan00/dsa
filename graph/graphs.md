# What is a graph?

A graph is a collection of nodes and edges
Graph = nodes + edges
Nodes - Circles, Squares, etc.
Edges - Connections between nodes

### Directed Graphs

Arrowheads along edges from node to node. Restrictions along the way you can travel the graph.
Must obey the direction of the arrowheads

### Undirected Graphs

No directionality, just connections between nodes. Unrestricted travel (back and forth between nodes).
Can travel as you please. Think of it as a 2 way street.

### Neighbor Nodes

Any node that is accessible through an edge (obeying direction of edge if directed graph).

### Adjaceny List

Preferred way to represent graph information. Typically use a hashmap data structure to represent a adjacency list.
Looking for a constant time lookup data structure that has a key-value pair mapping.
JS - Object
Python - Dictionary
Java / C - Unordered Map

Keys = Nodes in graph
Values = Array of neighbors to key node
