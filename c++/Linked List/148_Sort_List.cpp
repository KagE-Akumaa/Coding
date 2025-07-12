
struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};
class Solution {
 public:
  ListNode* mergeSort(ListNode* l1, ListNode* l2) {
    ListNode* head = new ListNode(0);
    ListNode* tail = head;

    while (l1 && l2) {
      if (l1->val <= l2->val) {
        tail->next = l1;
        l1 = l1->next;
        tail = tail->next;
        tail->next = nullptr;

      } else {
        tail->next = l2;
        l2 = l2->next;
        tail = tail->next;
        tail->next = nullptr;
      }
    }
    if (l1) {
      tail->next = l1;
    }
    if (l2) tail->next = l2;

    ListNode* newHead = head->next;
    delete head;
    return newHead;
  }
  ListNode* sortList(ListNode* head) {
    if (!head || !head->next) return head;

    ListNode *slow = head, *fast = head, *c = nullptr;
    while (fast && fast->next) {
      fast = fast->next->next;
      c = slow;
      slow = slow->next;
    }
    if (c) c->next = nullptr;
    ListNode* l1 = sortList(head);
    ListNode* l2 = sortList(slow);

    return mergeSort(l1, l2);
  }
};