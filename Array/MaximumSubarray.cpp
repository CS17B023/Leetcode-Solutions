/*Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

Example:

Input: [-2,1,-3,4,-1,2,1,-5,4],
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
Follow up:

If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.*/



class Solution {
public:
    int crossing(vector<int> a, int low, int mid,int high)
    {
        int left_sum = -100000;
        int right_sum = -100000;
        int sum = 0;
        for(int i = mid; i >= 0; i--)
        {
            sum += a[i];
            if(sum >= left_sum)
                left_sum = sum;
        }
        sum = 0;
        for(int i = mid + 1; i <= high; i++)
        {
            sum += a[i];
            if(sum >= right_sum)
                right_sum = sum;
        }
        return left_sum + right_sum;
        
    }
    int maxSumSubArray(vector<int> a,int low,int high)
    {
        if(low == high)
            return a[low];
        int mid = (low+high)/2;
        int l = maxSumSubArray(a,low,mid);
        int r = maxSumSubArray(a,mid+1,high);
        int c = crossing(a,low,mid,high);
        if(l >= r && l >= c)
            return l;
        else if(r >= l && r >=c)
            return r;
        return c;
    }
    int maxSubArray(vector<int>& nums) 
    {
       int res = maxSumSubArray(nums,0,nums.size()-1);
        return res;
    }
};