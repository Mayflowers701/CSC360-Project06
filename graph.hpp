#include <iostream>
#include <vector>
#include <utility>

class edge{
public:
  std::pair<std::string, std::string> _nodes;
  int _weight;

  edge(std::string a, std::string b, int weight): _weight(weight){ _nodes.first = a; _nodes.second = b; };

};

class Graph{
public:
  std::vector<edge> _edges;

  Graph(){};

};
