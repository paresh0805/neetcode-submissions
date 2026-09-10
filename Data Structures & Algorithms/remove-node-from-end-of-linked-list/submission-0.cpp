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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp1=head;
        ListNode* temp2=head;
        while(n>0){
            temp1=temp1->next;
            n--;
        }
        if (temp1 == nullptr) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        while (temp1->next != nullptr) {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        
        ListNode* temp3 = temp2->next;
        temp2->next = temp2->next->next;
        delete temp3;
        return head;


    }
};
