#include <iostream>

using namespace std;

class Node {
 public:
  int data;
  Node* next;

  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }
  ~Node() { delete next; }
};

int main() {
  Node* head;

  head = new Node(5);

  Node* second = new Node(10);
  Node* third = new Node(20);

  head->next = second;
  second->next = third;

  cout << head->data << "->" << second->data << "->" << third->data << "->"
       << "Null" << endl;
}