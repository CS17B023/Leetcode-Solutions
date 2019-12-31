/*Given an array with n objects colored red, white or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white and blue.

Here, we will use the integers 0, 1, and 2 to represent the color red, white, and blue respectively.

Note: You are not suppose to use the library's sort function for this problem.

Example:

Input: [2,0,2,1,1,0]
Output: [0,0,1,1,2,2]
Follow up:

A rather straight forward solution is a two-pass algorithm using counting sort.
First, iterate the array counting number of 0's, 1's, and 2's, then overwrite array with total number of 0's, then 1's and followed by 2's.
Could you come up with a one-pass algorithm using only constant space?*/


class Solution {
public:
    void sortColors(vector<int>& A) 
    {
        int low  = 0;
        int high = A.size() - 1;
        
        if(A.size() == 0 || A.size() == 1)
            return;
        int  count = 0;
        
        for(int i = 0; i < A.size(); i++)
        {
            if(A[i] == 0)
                count++;
        }
        
        if(count == A.size())
            return;
        
        while(low < high)
        {
            if(A[low] == 0)
                low++;
            else if(A[high] == 1 || A[high] == 2)
                high--;
            else
            {
                int temp = A[low];
                A[low]   = A[high];
                A[high]  = temp;
                low++;
                high--;
            }                
        }
        // if(low == high)return;
        
        
        low = 0;
        high = A.size() - 1;
        while(A[low] == 0)
            low++;
        while(low < high)
        {
             if(A[low] == 1)
                low++;
            else if(A[high] == 2)
                high--;
            else
            {
                int temp = A[low];
                A[low]   = A[high];
                A[high]  = temp;
                low++;
                high--;
            } 
        }
        // return A;
    }
};