/*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
Note:

All given inputs are in lowercase letters a-z.*/


class Solution
{
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
       if(strs.size() == 0)
           return  "";
       string res = strs[0];
        for(int i = 1; i < strs.size();i++)
        {
            int j = 0;
            string temp = strs[i];
            while(j < res.size() && temp[j] == res[j])
                j++;
            if(j == 0)
                res = "";
            res = res.substr(0,j);
            
        }
        return res;
        
    }
};