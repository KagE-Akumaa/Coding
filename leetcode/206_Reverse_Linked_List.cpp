
struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};
class Solution {
 public:
  void recursiveSol(ListNode* c, ListNode*& p, ListNode* n) {
    if (!c) return;

    n = c->next;
    c->next = p;
    p = c;
    c = n;
    recursiveSol(c, p, n);
  }
  ListNode* reverseList(ListNode* head) {
    if (!head) return nullptr;
    ListNode *p = nullptr, *c = head, *n = nullptr;

    recursiveSol(c, p, n);

    // while(c)
    // {
    //     n = c->next;
    //     c->next = p;
    //     p = c;
    //     c = n;
    // }
    return p;
  }
};