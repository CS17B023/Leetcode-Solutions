/*Given two binary strings, return their sum (also a binary string).

The input strings are both non-empty and contains only characters 1 or 0.

Example 1:

Input: a = "11", b = "1"
Output: "100"
Example 2:

Input: a = "1010", b = "1011"
Output: "10101"*/

class Solution {
public:
    string addBinary(string a, string b) 
    {
       int n = a.length();
       int m = b.length();
       int x;
       string res = "";
       if(m<n)
           x = m;
       else
           x = n;
       int carry = 0,i;
       for(i = 0;i<x;i++)
       {
           int p = a[n-i-1] - '0';
           int q = b[m-i-1] - '0';
           if(p==0 && q == 0 && carry == 0)
           {
               res += "0";
               carry = 0;
           }
           else if(p==0 && q == 0 && carry == 1)
           {
               res += "1";
               carry = 0;
           }
           else if(p == 0 && q == 1  && carry == 0)
           {
               res += "1";
               carry = 0;
           }
           else if(p == 1 && q == 0 && carry == 0)
           {
               res += "1";
               carry = 0;
           }
           else if((p == 0 && q == 1)  && carry == 1)
           {
               res += "0";
               carry = 1;
           }
           else if((p == 1 && q == 0) && carry == 1)
           {
               res += "0";
               carry = 1;
           }
           else if( p == 1 && q == 1  && carry == 0)
           {
               res += "0";
               carry = 1;
           }
           else if( p == 1 && q == 1 && carry == 1)
           {
               res += "1";
               carry = 1;
           }
       }
        int w = n;
        int v = m;
        if(m<n)
        {
            while(n>x)
            {
                int p = a[w-i-1] - '0';
                if( p == 0 && carry ==0 )
                {
                        res += "0";
                        carry = 0;
                }
                else if( p == 1 && carry ==0 )
                {
                        res += "1";
                        carry = 0;
                }
                else if( p == 0 && carry ==1 )
                {
                        res += "1";
                        carry = 0;
                }
                else if( p == 1 && carry ==1 )
                {
                        res += "0";
                        carry = 1;
                }
                n--;
                i++;
                
            }
        }
        else
        {
             while(m>x)
            {
                int p = b[v-i-1] - '0';
                if( p == 0 && carry ==0 )
                {
                        res += "0";
                        carry = 0;
                }
                 else if( p == 1 && carry ==0 )
                {
                        res += "1";
                        carry = 0;
                }
                else if( p == 0 && carry ==1 )
                {
                        res += "1";
                        carry = 0;
                }
                else if( p == 1 && carry ==1 )
                {
                        res += "0";
                        carry = 1;
                }
                m--;
                i++;
                
            }
        }
        
        if(carry == 1)
        {
            res += "1";
        }
        reverse(res.begin(),res.end());
        return res;
        
    }
};