/*Given a string containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Note that an empty string is also considered valid.

Example 1:

Input: "()"
Output: true
Example 2:

Input: "()[]{}"
Output: true
Example 3:

Input: "(]"
Output: false
Example 4:

Input: "([)]"
Output: false
Example 5:

Input: "{[]}"
Output: true*/

class Solution {
public:
    bool isValid(string s)
    {
        stack<char> st;
        int n = s.length();
        if(n == 0)
            return true;
        if( n == 1)
            return false;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '[' || s[i] == '{' || s[i] == '(')
                st.push(s[i]);
            else if(s[i] == ']')
            {
                if(st.empty())
                    return false;
                else if(st.top() == '[')
                    st.pop();
                else
                   st.push(s[i]);
            }
            else if(s[i] == '}')
            {
                if(st.empty())
                    return false;
                else if(st.top() == '{' )
                    st.pop();
                else
                    st.push(s[i]);
            }
            else if( s[i] == ')' )
            {
                if(st.empty())
                    return false;
               else if(st.top() == '(')
                    st.pop();
                else
                    st.push(s[i]);
            }
        }
        if(st.size() == 0)
            return true;
        else
            return false;
            
        
        
    }
};