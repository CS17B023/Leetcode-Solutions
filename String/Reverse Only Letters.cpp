/*Given a string S, return the "reversed" string where all characters that are not a letter stay in the same place, and all letters reverse their positions.

 

Example 1:

Input: "ab-cd"
Output: "dc-ba"
Example 2:

Input: "a-bC-dEf-ghIj"
Output: "j-Ih-gfE-dCba"
Example 3:

Input: "Test1ng-Leet=code-Q!"
Output: "Qedo1ct-eeLg=ntse-T!"
 

Note:

S.length <= 100
33 <= S[i].ASCIIcode <= 122 
S doesn't contain \ or "
*/

class Solution {
public:
    string reverseOnlyLetters(string S) 
    {
        int n = S.size();
        int low = 0;
        int high = n - 1;
        while(low < high)
        {
            if( (S[low]>=33 && S[low]<=64) || (S[low]>=91 && S[low]<=96) )
                low++;
            else if( (S[high]>=33 && S[high]<=64) || (S[high]>=91 && S[high]<=96) )
                high--;
            else
            {
                char temp = S[low];
                S[low]    = S[high];
                S[high]   = temp;
                low++;
                high--;
            }
        }
        return S;
    }
};