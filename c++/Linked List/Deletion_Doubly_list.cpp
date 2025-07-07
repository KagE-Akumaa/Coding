// Given a vector make it a doubly list

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
void insertAtPosition(Node*& head, int val, int x) {
  if (x == 0 || !head) {
    insertAtHead(head, val);
    return;
  }
  Node* n = new Node(val);
  int c = 0;
  Node* temp = head;
  while (temp && c < x - 1) {
    temp = temp->next;
    c++;
  }
  if (!temp) {
    cout << "OUT of BOUNDs\n";
    return;
  }
  n->prev = temp;
  n->next = temp->next;
  if (temp->next) {
    temp->next->prev = n;
  }
  temp->next = n;
}
void deleteAtHead(Node*& head) {
  if (!head) {
    cout << "Empty list\n";
    return;
  }
  Node* temp = head;
  head = head->next;
  if (head) head->prev = nullptr;
  delete temp;
}
void deleteAtTail(Node*& head) {
  if (!head) {
    cout << "Empty list\n";
    return;
  }
  if (!head->next) {
    delete head;
    head = nullptr;
    return;
  }
  Node* temp = head;
  while (temp->next) {
    temp = temp->next;
  }
  temp->prev->next = nullptr;
  delete temp;
}
void deleteAtPosition(Node*& head, int x) {
  if (!head) {
    cout << "Empty list/n";
    return;
  }
  if (x == 1) {
    deleteAtHead(head);
    return;
  }
  Node* curr = head;
  int c = 0;
  while (curr && c < x - 1) {
    curr = curr->next;
    c++;
  }

  if (!curr) {
    cout << "OUT OF BOUNDS\n";
    return;
  }

  if (curr->prev) {
    curr->prev->next = curr->next;
  }

  if (curr->next) {
    curr->next->prev = curr->prev;
  }

  delete curr;
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
  int n;
  cin >> n;
  vector<int> res(n);
  for (int& I : res) cin >> I;

  Node* head = nullptr;
  for (int i : res) insertAtTail(head, i);

  insertAtPosition(head, 25, 2);
  printList(head);
  cout << endl;
  //  deleteAtHead(head);
  // deleteAtTail(head);
  deleteAtPosition(head, 3);
  cout << endl;
  printList(head);
}