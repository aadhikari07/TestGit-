#ifndef NODES_HPP
#define NODES_HPP

#include <vector>
#include <iostream>
using namespace std;

// types:
// (1) Clients
// (2) Warehouses
// (3) Drones
// (4) New Client
string client = "client";
string drone = "drone";
string warehouse = "warehouse";
string newClient = "newClient";


struct vertex;

// EDGE
struct Edge{
    vertex *v;      //Pointer to other vertex
    int weight;     // Weight
};

// Graph Vertices
struct vertex{
  string type;            // type
  string name;            // ID
  bool visited;           // Visited tracker
  vector <Edge> Edges;    // Store edges to adjacent vertices
};



#endif // NODES_HPP
