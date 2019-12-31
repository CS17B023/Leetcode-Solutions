/*Given a string, find the first non-repeating character in it and return it's index. If it doesn't exist, return -1.

Examples:

s = "leetcode"
return 0.

s = "loveleetcode",
return 2.
Note: You may assume the string contain only lowercase letters.*/


class Solution {
public:
    int firstUniqChar(string s) 
    {
        int a[26]={0};
        vector<char>v;
        vector<int> res;
        for(int i = 0;i < s.size();i++)
            a[s[i]-'a']++;
        for(int i = 0;i < 26; i++)
            if(a[i] == 1)
                v.push_back(i+'a');
        
        for(int i = 0;i < v.size();i++ )
        {
            char x = v[i];
            for(int j = 0;j < s.size();j++)
            {
                if(s[j] == x)
                res.push_back(j);
            }
        }
        sort(res.begin(),res.end());
        if(v.size() == 0)
            return -1;
        
        return res[0];
        
    }
};