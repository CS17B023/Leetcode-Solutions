/*Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Example:

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]
Note:

You must do this in-place without making a copy of the array.
Minimize the total number of operations.*/


class Solution {
public:
    void moveZeroes(vector<int>& A)
    {
        int low = 0;
        int high = 1;
        int n = A.size();
        
        while(low < n && high < n)
        {
            if(A[low] != 0)
                low++;
            else if(A[high] == 0 || high < low)
                high++;
            else if(A[low] == 0 && A[high] != 0 && low < high)
            {
                int temp = A[low];
                A[low]   = A[high];
                A[high]  = temp;
                low++;
                high++;
            }
        }
        
        
    }
};