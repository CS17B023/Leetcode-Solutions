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
        vector<int>v;
        int  res = -1;
        for(int i =0;i<n;i++)
        {
            v.push_back(nums[i]);
            if(nums[i] == target)
            {
                res = i;
                break;
            }
        }
        if(res == -1)
        {
            v.push_back(target);
            sort(v.begin(),v.end());
            for(int i =0;i<v.size();i++)
            {
                if(v[i] == target)
                {
                    res = i;
                    break;
                }
            }
        }
        
        
        return res;
        
    }
};