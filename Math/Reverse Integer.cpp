/*Given a 32-bit signed integer, reverse digits of an integer.

Example 1:

Input: 123
Output: 321
Example 2:

Input: -123
Output: -321
Example 3:

Input: 120
Output: 21
Note:
Assume we are dealing with an environment which could only store integers within the 32-bit signed integer range: [−231,  231 − 1]. For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.*/


class Solution {
public:
    int reverse(int  n) 
    {
        if(n == INT_MIN)
            return 0;
        int flag = 0;
        if(n<0)
            flag = 1;
        if(flag)
            n = n*(-1);
        long res = 0;
        while(n>0)
        {
            int rem = n%10;
            res = res*10+rem;
            n = n/10;
        }
        if(res > INT_MAX)
            return 0;
        if(flag)
          return res*(-1);
       return res;
    }
};