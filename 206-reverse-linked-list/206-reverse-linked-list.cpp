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
        
        ListNode *NewNode=NULL;
        while(head!=NULL)
        {
            ListNode *next=head->next;
            head->next=NewNode;
            NewNode=head;
            head=next;
               
        }
        return NewNode;
    }
};