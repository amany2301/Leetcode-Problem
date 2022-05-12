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
        
      ListNode *prev=NULL; //create a node prev and store it with NULL
        ListNode *curr=head;         //create a new node curr that point towards head
        
        while(curr!=NULL)
        {
            ListNode *temp=curr->next; // store the value 2 in temp so we don't loose the node after 
                                        // breaking the node between 1 and 2
            
            curr->next=prev; // the next node of 1 is point towards prev or NULL
            prev=curr; // move prev to curr position prev 
            curr= temp; // move curr to temp position curr   
        }
        return prev;
    }
};