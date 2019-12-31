/*Given an array of n positive integers and a positive integer s, find the minimal length of a contiguous subarray of which the sum ≥ s. If there isn't one, return 0 instead.

Example: 

Input: s = 7, nums = [2,3,1,2,4,3]
Output: 2
Explanation: the subarray [4,3] has the minimal length under the problem constraint.
Follow up:
If you have figured out the O(n) solution, try coding another solution of which the time complexity is O(n log n). */

class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums)
    {
        int res = INT_MAX;
        int sum = 0;
        int j = 0;
        if(nums.size() == 0 || nums.size() == 1)
            return 0;
        
        for(int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
           
            while(sum >= s)
            {
                if(res > i-j+1)
                  res = i-j + 1;
                  sum -= nums[j++];
            }
        }
        if(res == INT_MAX)
            return 0;
        else
        return res;
    }
};