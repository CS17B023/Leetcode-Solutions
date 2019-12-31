/*Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

Your algorithm's runtime complexity must be in the order of O(log n).

If the target is not found in the array, return [-1, -1].

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]*/

class Solution 
{
public:
    vector<int> searchRange(vector<int>& nums, int target)
    {
        vector<int> res;
        if(nums.size() == 1)
        {
            if(nums[0] == target)
            {
                res.push_back(0);
                res.push_back(0);
                return res;
            }
            else
            {
                res.push_back(-1);
                res.push_back(-1);
                return res;
            }
        }
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right)
        {
            
            int mid = (left + right)/2;
            if(nums[mid] == target)
            {
                int up = mid;
                int down = mid;
                while(up <= nums.size()-1 && nums[up] == target)
                {
                    up++;
                }
                while(down >=0 && nums[down] == target)
                {
                    down--;
                }
                res.push_back(down+1);
                res.push_back(up-1);
                return res;
            }
            else if(nums[mid] < target)
                left = mid+1;
            else
                right = mid-1;
        }
        res.push_back(-1);
        res.push_back(-1);
        return res;
        
    }
};