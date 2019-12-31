/*Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

Example 1:

Input: [1,3,5,6], 5
Output: 2
Example 2:

Input: [1,3,5,6], 2
Output: 1
Example 3:

Input: [1,3,5,6], 7
Output: 4
Example 4:

Input: [1,3,5,6], 0
Output: 0*/


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int n = nums.size();
        int  res = -1;
        
        int low = 0;
        int high = n-1;
        
        while(low <= high)
        {
            int mid = (high + low)/2;
            
            if(nums[mid] == target)
            {
                res = mid;
                break;
            }
            else if(nums[mid] < target)
                low = mid + 1;
            else
                high = mid - 1;
        }
        if(res == -1)
        {
            low = 0;
            while(nums[low] < target)
                low++;
            res = low;
        }
        
        return res;
        
    }
};