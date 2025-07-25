/*
Given a linked list, there may exist a single loop or no loop. If there are a
total of X elements present in a loop, return X-1 as your answer; otherwise, in
case no loop exists, return -1.*/
// Node is defined as
struct Node {
  int data = 0;
  Node* next;
  Node() {
    this->data = 0;
    this->next = nullptr;
  }
  Node(int data) {
    this->data = data;
    this->next = nullptr;
  }
};
int solve(Node* head) {
  // Complete the function
  if (!head) return -1;

  Node *slow = head, *fast = head;
  bool loop = false;
  while (fast && fast->next)  //  0(n)
  {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast) {
      loop = true;
      break;
    }
  }
  if (!loop) return -1;
  Node* n = slow;
  int c = 0;
  while (true)  // 0(k) where k is the number of elements inside loop
  {
    slow = slow->next;
    n = n->next->next;
    c++;
    if (slow == n) break;
  }
  return c;
}