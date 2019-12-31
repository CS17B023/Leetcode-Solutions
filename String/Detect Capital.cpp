/*Given a word, you need to judge whether the usage of capitals in it is right or not.

We define the usage of capitals in a word to be right when one of the following cases holds:

All letters in this word are capitals, like "USA".
All letters in this word are not capitals, like "leetcode".
Only the first letter in this word is capital, like "Google".
Otherwise, we define that this word doesn't use capitals in a right way.
 

Example 1:

Input: "USA"
Output: True
 

Example 2:

Input: "FlaG"
Output: False
 

Note: The input will be a non-empty word consisting of uppercase and lowercase latin letters.*/



class Solution {
public:
    bool detectCapitalUse(string s)
    {
        int count = 0;
        int  n = s.length();
        for(int i = 0 ;i<n;i++)
        {
            if(s[i]>='A' && s[i]<='Z')
                count++;
        }
        if(count == n || count == 0)
            return true;
        else if(count == 1 && s[0]>='A' && s[0]<='Z')
            return true;
        else if(count == 1 && s[0]>='a' && s[0]<='z')
            return false;
        
        
            return false;
    }
};