/*Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

Example 1:

Input: 121
Output: true
Example 2:

Input: -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.
Example 3:

Input: 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
Follow up:

Coud you solve it without converting the integer to a string?*/


class Solution 
{
public:
    bool isPalindrome(long long n) 
    {
        long long w = n;
        int flag = 0;
        if(n<0)
            flag = 1;
        if(flag == 1)
            return false;
        long long res = 0;

        while(n>0)
        {
          long long rem = n%10;
            res *= 10;
            res += rem;
            n = n/10;
        }

        if(w == res)
          return true;
        else// if(w != res && w >0)
            return false;
    }
        
};