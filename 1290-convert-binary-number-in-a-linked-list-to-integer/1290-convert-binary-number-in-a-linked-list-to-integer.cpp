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
    int getDecimalValue(ListNode* head) {
        ListNode* t;
        t=head;
        int size=0;
        int sum=0;
        while(t){
            size=size+1;
            t=t->next;
        }
        
        int sizeOfLL = size-1;
        
        while(head){
            sum += head->val*pow(2, sizeOfLL);
            head=head->next;
            sizeOfLL--;
        }
        return sum;
        
        
    }
};