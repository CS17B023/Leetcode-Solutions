/*Given two arrays arr1 and arr2, the elements of arr2 are distinct, and all elements in arr2 are also in arr1.

Sort the elements of arr1 such that the relative ordering of items in arr1 are the same as in arr2.  Elements that don't appear in arr2 should be placed at the end of arr1 in ascending order.

 

Example 1:

Input: arr1 = [2,3,1,3,2,4,6,7,9,2,19], arr2 = [2,1,4,3,9,6]
Output: [2,2,2,1,4,3,3,9,6,7,19]
 

Constraints:

arr1.length, arr2.length <= 1000
0 <= arr1[i], arr2[i] <= 1000
Each arr2[i] is distinct.
Each arr2[i] is in arr1.*/


class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) 
    {
        map<int,int>m;
        int n = arr1.size();
        int p = arr2.size();
        vector<int>res;
        for(int i = 0; i < n; i++)
        {
            if(m.find(arr1[i]) != m.end())
                 m[arr1[i]]++;
            else
                 m.insert(make_pair(arr1[i],1));     
        }
        
        for(int i = 0 ; i < p; i++)
        {
                int j = 0;
                while(j < m[arr2[i]])
                {
                    res.push_back(arr2[i]);
                    j++;
                }
                m.erase(arr2[i]);
        }
        
        map<int,int> :: iterator itr;
        for(itr = m.begin(); itr != m.end(); itr++)
        {
            int j = 0;
            while(j < itr->second)
            {
                 res.push_back(itr->first);
                 j++;
            }
           
        }
        
        return res;
        
    }
};