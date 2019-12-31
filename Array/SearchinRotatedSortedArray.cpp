/*Suppose an array sorted in ascending order is rotated at some pivot unknown to you beforehand.

(i.e., [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2]).

You are given a target value to search. If found in the array return its index, otherwise return -1.

You may assume no duplicate exists in the array.

Your algorithm's runtime complexity must be in the order of O(log n).

Example 1:

Input: nums = [4,5,6,7,0,1,2], target = 0
Output: 4
Example 2:

Input: nums = [4,5,6,7,0,1,2], target = 3
Output: -1*/

class Solution {
public:
    int binarySearch(vector<int>a,int left,int right,int x)
    {
          int mid = (left + right)/2;
        if(a[mid] == x)
            return mid;
        cout<<"left = "<<left<<endl;
        cout<<"right = "<<right<<endl;
         if(left > right)
           return -1;
      
        
        if(a[mid] >= a[left])
        {
            if(a[left] <= x && a[mid] >= x)
                return binarySearch(a,left,mid-1,x);
            else
                return binarySearch(a,mid+1,right,x);
        }
        else
        {
            if(a[mid] <= x && a[right] >= x)
                return binarySearch(a,mid+1,right,x);
            else
                return binarySearch(a,left,mid-1,x);
        }
       // return -1;
    }
    int search(vector<int>& nums, int target) 
    {
        if(nums.size() == 0)
            return -1;
        int res = binarySearch(nums,0,nums.size()-1,target);
        return res;
    }
};