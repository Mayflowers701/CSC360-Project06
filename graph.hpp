#include <iostream>
#include <vector>

class edge{
public:
  std::string _first;
  std::string _second;
  int _weight;

  edge(std::string first, std::string second, int weight): _first(first), _second(second), _weight(weight) {};

};

class Graph{
public:
  std::vector<edge> _edges;

  Graph(){};

};
