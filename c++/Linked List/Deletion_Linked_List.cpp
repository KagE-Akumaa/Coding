// Delete elements in first place , last place and random place in middle

#include <iostream>
#include <vector>
using namespace std;

class Node {
 public:
  int data;
  Node* next;

  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }

  //~Node() { //delete next; }
};
void printList(Node* head) {
  Node* temp = head;
  while (temp) {
    cout << temp->data << (temp->next == nullptr ? "" : "->");
    temp = temp->next;
  }
}
void insertAtHead(Node*& head, int val) {
  Node* temp = new Node(val);
  if (head == nullptr) {
    head = temp;
    return;
  } else {
    temp->next = head;
    head = temp;
  }
}

void insertAtTail(Node*& head, int val) {
  if (head == NULL) {
    insertAtHead(head, val);
    return;
  }
  Node* temp = head;
  while (temp->next) {
    temp = temp->next;
  }
  Node* x = new Node(val);
  temp->next = x;
}

void insertAtPosition(Node*& head, int val, int x) {
  Node* y = new Node(val);
  if (x == 0 || head == nullptr) {
    y->next = head;
    head = y;
    return;
  }
  int c = 0;
  Node* temp = head;
  while (temp != nullptr && c < x - 1) {
    temp = temp->next;
    c++;
  }
  if (temp == nullptr) {
    cout << "Position out of bounds\n";
    delete y;
    return;
  }
  y->next = temp->next;
  temp->next = y;
}

void deleteAtHead(Node*& head) {
  if (head == nullptr) {
    cout << "The list is empty\n";
    return;
  }

  Node* temp = head;
  head = head->next;
  temp->next = nullptr;
  delete temp;
}
void deleteAtEnd(Node*& head) {
  if (head == nullptr) {
    cout << "List is empty\n";
    return;
  }
  if (head->next == nullptr) {
    delete head;
    head = nullptr;
    return;
  }
  Node* temp = head;
  while (temp->next->next) {
    temp = temp->next;
  }
  delete temp->next;
  temp->next = nullptr;
}
void deleteAtPosition(Node*& head, int x) {
  if (head == nullptr) {
    cout << "List is empty\n";
    return;
  }
  if (x == 0) {
    deleteAtHead(head);
    return;
  }

  Node* temp = head;
  int c = 0;
  while (temp != nullptr && c < x - 1) {
    temp = temp->next;
    c++;
  }
  if (temp == nullptr || temp->next == nullptr) {
    cout << "Position out of bounds\n";
    return;
  }
  Node* nodeToDelete = temp->next;
  temp->next = nodeToDelete->next;

  delete nodeToDelete;
}
int main() {
  int n;
  cin >> n;
  vector<int> res(n);
  for (int& I : res) cin >> I;

  Node *head1, *head2;
  head1 = nullptr, head2 = nullptr;

  for (int i : res) {
    insertAtHead(head1, i);
    insertAtTail(head2, i);
  }

  printList(head1);
  cout << endl;
  printList(head2);
  cout << endl;
  insertAtPosition(head2, 10, 5);
  cout << endl;
  printList(head2);
  cout << endl;
  // deleteAtHead(head2);
  // deleteAtEnd(head2);
  deleteAtPosition(head2, 2);
  printList(head2);
}