/*A sentence S is given, composed of words separated by spaces. Each word consists of lowercase and uppercase letters only.

We would like to convert the sentence to "Goat Latin" (a made-up language similar to Pig Latin.)

The rules of Goat Latin are as follows:

If a word begins with a vowel (a, e, i, o, or u), append "ma" to the end of the word.
For example, the word 'apple' becomes 'applema'.
 
If a word begins with a consonant (i.e. not a vowel), remove the first letter and append it to the end, then add "ma".
For example, the word "goat" becomes "oatgma".
 
Add one letter 'a' to the end of each word per its word index in the sentence, starting with 1.
For example, the first word gets "a" added to the end, the second word gets "aa" added to the end and so on.
Return the final sentence representing the conversion from S to Goat Latin. */

class Solution {
public:
    string toGoatLatin(string s) 
    {
        int n = s.length();
        string result  = "";
        int count = 0;
        for(int i = 0 ; i < n ; i++)
        {
            string res = "";
            while(s[i] != ' ' && i<n)
            {
                res += s[i];
                i++;
            }
            count++;
            if(res[0] == 'a' || res[0] == 'e' || res[0] == 'i' || res[0] == 'o' || res[0] == 'u' || res[0] == 'A' || res[0] == 'E' || res[0] == 'I' || res[0] == 'O' || res[0] == 'U')
                res += "ma";
            if(res[0] != 'a' && res[0] != 'e' && res[0] != 'i' && res[0] != 'o' && res[0] != 'u' && res[0] != 'A' && res[0]!='E' && res[0]!='I' &&res[0]!='O' &&res[0]!='U' )
            {
                char s1 = res[0];
                res = res.substr(1,res.size()-1);
                res.push_back(s1);
                res += "ma";
            }

            int x = count;
            while(x>0)
            {
                res += "a";
                x--;
            }
            result += res;
            result += " ";

        }
        result = result.substr(0,result.size()-1);
	return result;
        
    }
};