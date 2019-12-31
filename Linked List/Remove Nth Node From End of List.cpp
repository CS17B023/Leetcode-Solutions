/*Given a linked list, remove the n-th node from the end of list and return its head.

Example:

Given linked list: 1->2->3->4->5, and n = 2.

After removing the second node from the end, the linked list becomes 1->2->3->5.
Note:

Given n will always be valid.

Follow up:

Could you do this in one pass?*/

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
    int Length(ListNode* head)
    {
        if(head == NULL)
            return 0;
        else
            return 1 + Length(head->next);
    }
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        int len = Length(head) - n + 1;
        ListNode* temp1 = head;
        ListNode* temp2;
        if(len == 1)
        {
            head = head->next;
            delete(temp1);
            return head;
        }
        if(head == NULL)
            return NULL;
        for(int i = 1 ;temp1 != NULL && i <= len - 1 ; i++)
        {
            temp2 = temp1;
            temp1 = temp1->next;
        }
        temp2->next = temp1->next;
        delete(temp1);
        return head;
        
        
    }
};