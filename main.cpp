#include <iostream>
#include <fstream>

#include "graph.hpp"

using namespace std;

int main(int argc, char* argv[]){

  //handle command line arguments
  if(argc != 2){
    cout << "Incorrect number of arguments. This program accepts only one argument." << endl;
    return 0;
  }

  //open file
  string filename = argv[1];
  ifstream file(filename);

  //init variables for graph data
  Graph network;

  string nodeA;
  string nodeB;
  int weight;

  int i = 0;
  //init graph
  while(file >> nodeA){
    file >> nodeB;
    file >> weight;
    edge newEdge(nodeA, nodeB, weight);

    network._edges.push_back(newEdge);

    cout << network._edges[i]._first << " " << network._edges[i]._second << " " << network._edges[i]._weight << endl;
    i++;
  }


  //minimum spanning tree algorithm


  return 0;
}
