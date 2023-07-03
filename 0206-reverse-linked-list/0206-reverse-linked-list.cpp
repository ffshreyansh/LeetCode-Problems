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
    ListNode* reverseList(ListNode* head) {
        
        
        if(head == nullptr || head->next == nullptr)
            return head;
        ListNode* prevNode;
        ListNode* currNode;
        ListNode* nextNode;
        prevNode = nullptr;
        currNode = head;
        nextNode = head->next;
        
        while(nextNode != nullptr){
            
            currNode->next = prevNode;
            prevNode = currNode;
            currNode = nextNode;
             nextNode = nextNode->next;
        }
        currNode->next=prevNode;
        return currNode;
        
    }
};