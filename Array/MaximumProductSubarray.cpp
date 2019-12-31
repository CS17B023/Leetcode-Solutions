/*Given an integer array nums, find the contiguous subarray within an array (containing at least one number) which has the largest product.

Example 1:

Input: [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.
Example 2:

Input: [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.*/


class Solution {
public:
    
    int maxProduct(vector<int>& nums)
    {
        int res = INT_MIN;
        int n = nums.size();
        
        int minval = 1;
        int maxval = 1;
        int prevmax;
        
        for(int i = 0; i < n; i++)
        {
            if(nums[i] > 0)
            {
                maxval  = maxval*nums[i];
                minval  = min(1,minval*nums[i]);
            }
            else if(nums[i] == 0)
            {
                maxval = 0;
                minval = 1;
            }
            else if(nums[i] < 0)
            {
                prevmax = maxval;
                maxval = minval*nums[i];
                minval = prevmax*nums[i];
            }
            
             res = max(res,maxval);
            if(maxval <= 0)
                maxval = 1;
        }
       
        
        return res;
    }
};