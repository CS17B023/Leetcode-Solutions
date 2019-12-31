/*Given a non-empty string s, you may delete at most one character. Judge whether you can make it a palindrome.

Example 1:
Input: "aba"
Output: True
Example 2:
Input: "abca"
Output: True
Explanation: You could delete the character 'c'.
Note:
The string will only contain lowercase characters a-z. The maximum length of the string is 50000.*/


class Solution {
public:
    bool isValid(string s,int i ,int j )
    {
        int low = i;
        int high = j;
          while(low<=high)
        {
            if(s[low] != s[high])
                return false;
                
                low++;
                high--;
        }
            
       return true;
        
    }
    bool validPalindrome(string s)
    {
        int n = s.size();
        int low = 0;
        int high = n-1;
        while(low<=high)
        {
            if(s[low] != s[high])
                return isValid(s,low+1,high) || isValid(s,low,high-1);
                
                low++;
                high--;
        }
            
       return true;
       
    }
};