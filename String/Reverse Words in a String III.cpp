/*Given a string, you need to reverse the order of characters in each word within a sentence while still preserving whitespace and initial word order.

Example 1:
Input: "Let's take LeetCode contest"
Output: "s'teL ekat edoCteeL tsetnoc"
Note: In the string, each word is separated by single space and there will not be any extra space in the string.*/


class Solution {
public:
    string reverseWords(string s) 
    {
        string res = "";
        //cout<<s.size()<<endl;
        for(int i = 0 ; i < s.size() ; i++)
        {
            string res1 = "";
            while(s[i] != ' ' && i < s.size())
            {
                res1 += s[i];
                i++;
            }
     
            reverse(res1.begin(),res1.end());
            res += res1;
            res += ' ';
        }
        res = res.substr(0,res.size()-1);
        return res;
    }
};