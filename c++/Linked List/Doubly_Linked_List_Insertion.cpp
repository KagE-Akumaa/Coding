#include <iostream>
#include <vector>
using namespace std;

class Node {
 public:
  int data;
  Node *next, *prev;

  Node(int data) {
    this->data = data;
    this->next = nullptr;
    this->prev = nullptr;
  }
};
void insertAtHead(Node*& head, int val) {
  if (!head) {
    Node* n = new Node(val);
    head = n;
    return;
  }
  Node* n = new Node(val);
  n->next = head;
  head->prev = n;
  head = n;
}
void insertAtTail(Node*& head, int val) {
  if (!head) {
    head = new Node(val);
    return;
  }

  Node* n = new Node(val);
  Node* temp = head;
  while (temp->next) {
    temp = temp->next;
  }

  n->prev = temp;
  temp->next = n;
}
void printList(Node* head) {
  Node* temp = head;
  while (temp) {
    cout << temp->data << (temp->next ? "->" : "");
    temp = temp->next;
  }
}
void printListBackward(Node* head) {
  Node* temp = head;
  while (temp->next) {
    // cout << temp->data << (temp->next ? "->" : "");
    temp = temp->next;
  }
  while (temp) {
    cout << temp->data << (temp->prev ? "->" : "");
    temp = temp->prev;
  }
}
int main() {
  Node* head = new Node(10);
  insertAtHead(head, 9);
  insertAtHead(head, 19);
  insertAtTail(head, 20);
  insertAtTail(head, 21);
  printList(head);
  cout << '\n';
  printListBackward(head);
}