/*Given two arrays, write a function to compute their intersection.

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]
Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]
Note:

Each element in the result must be unique.
The result can be in any order.*/



class Solution {
public:
    
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2)
    {
       set<int> s;
        set<int> res;
        vector<int> result;
        for(int i = 0; i < nums1.size(); i++)
        {
             s.insert(nums1[i]);
        }
        for(int i = 0; i < nums2.size(); i++)
        {
            if(s.find(nums2[i]) != s.end())
                res.insert(nums2[i]);
        }
        set<int>:: iterator itr;
        for(itr = res.begin(); itr != res.end(); itr++)
        {
            result.push_back(*itr);
        }
        return result;
    }
};