class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* answerHead = new ListNode(0);
        ListNode* current = answerHead;
        int carryOn = 0;
        while (l1 != nullptr || l2 != nullptr || carryOn != 0){
            int val1 = (l1 != nullptr) ? l1-> val : 0;
            int val2 = (l2 != nullptr) ? l2-> val : 0;
            int sum = val1 + val2 + carryOn;
            carryOn = sum / 10;
            int weNeed = sum % 10;
            ListNode* newNode = new ListNode(weNeed);
            current -> next = newNode;
            current = current->next;
            if (l1 != nullptr) l1 = l1-> next;
            if (l2 != nullptr) l2 = l2-> next;
        }
        return answerHead -> next;
    }
};