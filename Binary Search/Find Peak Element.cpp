/*A peak element is an element that is greater than its neighbors.

Given an input array nums, where nums[i] ≠ nums[i+1], find a peak element and return its index.

The array may contain multiple peaks, in that case return the index to any one of the peaks is fine.

You may imagine that nums[-1] = nums[n] = -∞.

Example 1:

Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.
Example 2:

Input: nums = [1,2,1,3,5,6,4]
Output: 1 or 5 
Explanation: Your function can return either index number 1 where the peak element is 2, 
             or index number 5 where the peak element is 6.
Note:

Your solution should be in logarithmic complexity.*/

class Solution
{
public:
    int findPeakElement(vector<int>& a) 
    {
        int low = 0;
        int high = a.size()-1;
        if(a.size() == 1)
            return 0;
        if(a.size() == 2)
        {
            if(a[0] > a[1])
                return 0;
            else if(a[0] < a[1])
                return 1;
            else 
                return -1;
        }
        while(low<=high)
        {
            
            int mid = (low + high)/2;
            if(mid == 0 && a[mid] > a[mid + 1])
                return mid;
            if(mid == a.size() -1 && a[mid] > a[mid-1])
                return mid;
            if(a[mid] > a[mid+1] && a[mid] > a[mid-1])
                return mid;
            else if (a[mid] < a[mid+1])
                low = mid + 1;
            else
                high = mid - 1;
        }
        return -1;
    }
};