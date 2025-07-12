#include <unordered_map>
struct Node {
  int data;
  struct Node* next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
class Solution {
 public:
  Node* segregate(Node* head) {
    // code here
    unordered_map<int, int> mpp;
    Node* temp = head;
    while (temp) {
      mpp[temp->data]++;
      temp = temp->next;
    }
    temp = head;
    while (mpp[0]) {
      mpp[0]--;
      temp->data = 0;
      temp = temp->next;
    }
    while (mpp[1]) {
      mpp[1]--;
      temp->data = 1;
      temp = temp->next;
    }
    while (mpp[2]) {
      mpp[2]--;
      temp->data = 2;
      temp = temp->next;
    }
    return head;
  }
};