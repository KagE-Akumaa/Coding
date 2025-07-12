
struct ListNode {
  int val;
  ListNode* next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
 public:
  ListNode* oddEvenList(ListNode* head) {
    if (!head) return nullptr;
    ListNode* l1 = new ListNode(0);
    ListNode* l2 = new ListNode(0);

    ListNode* odd = l1;
    ListNode* even = l2;

    ListNode* temp = head;
    bool flag = true;
    while (temp) {
      if (flag) {
        odd->next = temp;
        temp = temp->next;
        odd = odd->next;
        odd->next = nullptr;
      }
      if (!flag) {
        even->next = temp;
        temp = temp->next;
        even = even->next;
        even->next = nullptr;
      }
      flag = !flag;
    }
    ListNode* oddHead = l1->next;
    ListNode* evenHead = l2->next;
    odd->next = evenHead;
    delete l1;
    delete l2;
    return oddHead;
  }
};