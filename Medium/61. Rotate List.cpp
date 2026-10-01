/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        int c = 1;
        if(head == nullptr){
            return 0;
        }
        ListNode* t = head;
        while (t->next != nullptr){
                c++;
                t = t->next;
            }
        k %= c;
        while(k>0){
            k--;
            ListNode* temp = head;
            if(temp->next == nullptr){
                return head;
            }
            else if (temp->next->next == nullptr){
            temp->next->next = head;
            head = temp->next;
            temp->next = nullptr;
            }
            else{
            while(temp->next->next != nullptr){
                temp = temp->next;
            }
            temp->next->next = head;
            head = temp->next;
            temp->next = nullptr;
        }
        }
        return head;
    }
    
};
                