/*Given a positive integer num, write a function which returns True if num is a perfect square else False.

Note: Do not use any built-in library function such as sqrt.

Example 1:

Input: 16
Output: true
Example 2:

Input: 14
Output: false*/


class Solution {
public:
    bool isPerfectSquare(int num) 
    {
            if(num == 0 || num == 1)
                return true;
        long start = 1;
        long end   = num;
        while(start<=end)
        {
           long mid = (start+end)/2;
           long sqr = mid*mid;
            if(sqr == num)
                return true;
            else if(sqr < num)
                start = mid+1;
            else
                end = mid-1;
        }
        return false;
    }
};