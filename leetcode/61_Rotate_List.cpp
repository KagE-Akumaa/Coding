
struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
 public:
  ListNode* rotateRight(ListNode* head, int k) {
    if (!head || !head->next || k == 0) return head;
    ListNode* tail = head;
    int n = 1;
    while (tail->next) {
      tail = tail->next;
      n++;
    }
    k = k % n;
    tail->next = head;
    ListNode* temp = head;
    int c = n - k;

    for (int i = 1; i < c; i++) {
      temp = temp->next;
    }
    ListNode* newHead = temp->next;
    temp->next = nullptr;
    return newHead;
  }
};