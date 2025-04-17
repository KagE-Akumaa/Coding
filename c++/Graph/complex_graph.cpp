#include <iostream>
#include <list>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
class Node {
  string name;
  list<string> nbrs;

 public:
  Node(string name) : name(name) {}

  friend class Graph;
};

class Graph {
  unordered_map<string, Node*> m;

 public:
  Graph(vector<string> cities) {
    for (string s : cities) m[s] = new Node(s);
  }

  void addEdges(string x, string y, bool undir = false) {
    m[x]->nbrs.push_back(y);
    if (undir) m[y]->nbrs.push_back(x);
  }

  void print() {
    for (auto citypair : m) {
      auto city = citypair.first;
      Node* node = citypair.second;
      cout << city << "-->";
      for (auto nbr : node->nbrs) {
        cout << nbr << ",";
      }
      cout << endl;
    }
  }
  ~Graph() {
    for (auto citypair : m) {
      delete citypair.second;
    }
  }
};

int main() {
  vector<string> cities = {"Delhi", "Mumbai", "Kolkata", "Chennai"};
  Graph g(cities);

  g.addEdges("Delhi", "Mumbai", true);
  g.addEdges("Mumbai", "Kolkata", true);
  g.addEdges("Kolkata", "Chennai", true);
  g.addEdges("Chennai", "Delhi", true);

  g.print();

  return 0;
}
