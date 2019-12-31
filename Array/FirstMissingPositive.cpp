/*Given an unsorted integer array, find the smallest missing positive integer.

Example 1:

Input: [1,2,0]
Output: 3
Example 2:

Input: [3,4,-1,1]
Output: 2
Example 3:

Input: [7,8,9,11,12]
Output: 1
Note:

Your algorithm should run in O(n) time and uses constant extra space.*/

class Solution {
public:
    int firstMissingPositive(vector<int>& nums)
    {
        for(int i = 0; i < nums.size(); i++ )
        {
            if(nums[i] > nums.size() || nums[i] == 0)
                nums[i] = nums.size() + 1;
        }
         for(int i = 0; i < nums.size(); i++)
         {
             long  value = abs(nums[i]);
             if( value <= nums.size()  && value != 0)
             {
                 if(nums[value-1] > 0)
                  nums[value-1] = -nums[value-1];
             }
                
         }
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] >= 0)
                return i + 1;
        }
        return nums.size()+1;
    }
};