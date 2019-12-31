/*Count the number of segments in a string, where a segment is defined to be a contiguous sequence of non-space characters.

Please note that the string does not contain any non-printable characters.

Example:

Input: "Hello, my name is John"
Output: 5*/

class Solution {
public:
    int countSegments(string s) 
    {
        int n = s.length();
        int count = 0;
       
        for(int i = 0 ; i < n ; i++)
        {
            int flag = 0;
            while(s[i] != ' ' && i<n)
            {
                flag = 1;
                i++;
            }
            if(flag == 1)
            count++;
        }
        return count;

    }
};