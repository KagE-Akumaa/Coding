#include <iostream>
#include <list>
#include <memory>
#include <vector>

using namespace std;

class Graph {
  vector<list<int>> l;
  int V;

 public:
  Graph(int v) : V(v), l(v) {}

  void addEdge(int i, int j, bool undir = true) {
    l[i].push_back(j);
    if (undir) {
      l[j].push_back(i);
    }
  }
  void print() {
    for (int i = 0; i < V; i++) {
      cout << i << "-->";
      for (auto a : l[i]) {
        cout << a << ",";
      }
      cout << endl;
    }
  }
};

int main() {
  Graph g(6);

  g.addEdge(0, 1);
  g.addEdge(0, 4);
  g.addEdge(2, 1);
  g.addEdge(3, 4);
  g.addEdge(4, 5);
  g.addEdge(2, 3);
  g.addEdge(3, 5);

  g.print();
}