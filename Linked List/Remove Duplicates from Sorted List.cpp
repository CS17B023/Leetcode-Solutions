/*Given a sorted linked list, delete all duplicates such that each element appear only once.

Example 1:

Input: 1->1->2
Output: 1->2
Example 2:

Input: 1->1->2->3->3
Output: 1->2->3*/


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
       if(head == nullptr)
           return nullptr;
       if(head->next == nullptr)
            return head;
            if(head->val == head->next->val)
            {
                 ListNode* p = head->next;
                 head->next = head->next->next;
                 p = NULL;
                 return deleteDuplicates(head);
            }
        else
        {
            head->next = deleteDuplicates(head->next);
        }
        return head;
        
    }
};