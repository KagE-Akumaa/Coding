
struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
 public:
  ListNode* reverse(ListNode* head) {
    ListNode *curr = head, *p = nullptr, *n = nullptr;
    if (!head) return nullptr;
    while (curr) {
      n = curr->next;
      curr->next = p;
      p = curr;
      curr = n;
    }
    return p;
  }
  bool isPalindrome(ListNode* head) {
    if (!head) return false;
    ListNode *slow = head, *fast = head;

    while (fast && fast->next) {
      fast = fast->next->next;
      slow = slow->next;
    }

    ListNode* first = head;
    ListNode* second = slow;
    //  slow->next = nullptr;

    ListNode* head2 = reverse(second);

    while (first && head2) {
      if (first->val != head2->val) return false;
      first = first->next;
      head2 = head2->next;
    }
    return true;
  }
};