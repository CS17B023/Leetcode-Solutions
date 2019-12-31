/*Remove all elements from a linked list of integers that have value val.

Example:

Input:  1->2->6->3->4->5->6, val = 6
Output: 1->2->3->4->5
*/




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
    ListNode* removeElements(ListNode* head, int val) 
    {
        
        if(head == NULL)
            return NULL;
        if(head->next == NULL && head->val == val)
        {
            head = NULL;
            return head;
        }
        ListNode* temp1 = head;
        int count = 0;
        while(temp1 != NULL)
        {
            if(temp1->val == val)
                count++;
            temp1 = temp1->next;
        }
        
        while(count>0)
        {
            while(head != NULL && head->val == val && count > 0)
            {
                ListNode* temp = head;
                head = head->next;
                delete(temp);
                count--;
            }
            if(count == 0)
                return head;
            temp1 = head;
            ListNode* temp2;
            while(temp1 != NULL && temp1->val != val)
            {
                temp2 = temp1;
                temp1 = temp1->next;
            }
            if(temp1->val == val)
            {
                temp2->next = temp1->next;
                delete(temp1);
            }
            count--;
        }
        return head;
    }
};