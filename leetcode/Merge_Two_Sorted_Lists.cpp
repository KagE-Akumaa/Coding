
struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
 public:
  ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if (!list1 && !list2) return nullptr;

    ListNode* head = new ListNode(0);
    ListNode* tail = head;
    while (list1 && list2) {
      if (list1->val <= list2->val) {
        tail->next = list1;
        list1 = list1->next;
        tail = tail->next;
        tail->next = nullptr;
      } else {
        tail->next = list2;
        list2 = list2->next;
        tail = tail->next;
        tail->next = nullptr;
      }
    }

    if (list1) {
      tail->next = list1;
    }
    if (list2) tail->next = list2;

    ListNode* newHead = head->next;
    delete head;
    return newHead;
  }
};