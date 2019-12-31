/*Implement strStr().

Return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

Example 1:

Input: haystack = "hello", needle = "ll"
Output: 2
Example 2:

Input: haystack = "aaaaa", needle = "bba"
Output: -1
Clarification:

What should we return when needle is an empty string? This is a great question to ask during an interview.

For the purpose of this problem, we will return 0 when needle is an empty string. This is consistent to C's strstr() and Java's indexOf().

*/

class Solution {
public:
    int strStr(string haystack, string needle)
    {

      
        int i,c,count=0;
        for(i=0;i<haystack.size();i++)
       {
         if(haystack[i]==needle[0])
          {
            for(int j=0;j<needle.size();j++)
              {
                if(haystack[j+i] == needle[j])
                  {
                    count++;
                    c=i;
                  }
                else
                {
                    count = 0;
                     break;
                }
                   
              }
          }
             if(count == needle.size())
                 break;
      }
    if(needle.size() == 0)
        return 0;
    else if(count == needle.size())
    return c;
    else
    return -1;
    }
};   