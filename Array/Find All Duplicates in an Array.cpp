/*Given an array of integers, 1 ≤ a[i] ≤ n (n = size of array), some elements appear twice and others appear once.

Find all the elements that appear twice in this array.

Could you do it without extra space and in O(n) runtime?

Example:
Input:
[4,3,2,7,8,2,3,1]

Output:
[2,3]*/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
        int count , ans = 0,j;
        int n = nums.size(); 
        for(int i = 0; i < n; i++)
        {
            j = i;
            count = 1;
            while(i < n - 1 && nums[i] == nums[i+1])
            {
                count++;
                i++;
            }
            if(count == 2)
                nums[ans++] = nums[j];
        }
        for(int i = 0; i < n - ans; i++)
            nums.pop_back();
        return nums;
        
    }
};