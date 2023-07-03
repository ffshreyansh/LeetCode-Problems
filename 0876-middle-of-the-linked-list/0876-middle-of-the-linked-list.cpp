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
    ListNode* middleNode(ListNode* head) {
        int size = 0;
        
        ListNode* t = head;
        
        while(t){
            size++;
            t=t->next;
        }
        int original_size = size;
        int half = size/2;
        
        while(head){
            if((original_size % 2 == 0 && size == half) || (original_size%2 != 0 && size-1 == half) ){
                break;
            }
            head=head->next;
            size--;
        }
        return head;
    }
};