/*Given a singly linked list, determine if it is a palindrome.

Example 1:

Input: 1->2
Output: false
Example 2:

Input: 1->2->2->1
Output: true
Follow up:
Could you do it in O(n) time and O(1) space?*/


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
    bool isPalindrome(ListNode* head) 
    {
        ListNode* temp = head;
        int flag =0;
        stack<int>s;
        if(temp == NULL)
            return true;
        while(temp != NULL)
        {
            s.push(temp->val);
            temp = temp->next;
        }
        ListNode* temp1 = head;
        while(!s.empty())
        {
            int x = s.top();
            s.pop();
            int y = temp1->val;
            temp1 = temp1->next;
            if(x == y)
                flag = 1;
            else
            {
                flag = 0;
                break;
            }
        }
        if(flag == 1)
            return true;
        else
            return false;
        
    }
};