/*Given a positive integer n, generate a square matrix filled with elements from 1 to n2 in spiral order.

Example:

Input: 3
Output:
[
 [ 1, 2, 3 ],
 [ 8, 9, 4 ],
 [ 7, 6, 5 ]
]*/

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) 
    {
        vector<vector<int>> res(n);
       
        
        if(n == 1 )
        {
            res[0] = vector<int>(1);
            res[0][0] = 1;
            return res;
        }
        
        int l = 0;
        int r = n - 1;
        int t = 0;
        int b = n - 1;
        
        int val = 1;
        int dir = 0;
        
        for(int i = 0; i < n; i++)
            res[i] = vector<int>(n);
        
        
        while(l <= r && t <= b)
        {
            if(dir == 0)
            {
                for(int i = l; i <= r; i++)
                {
                    res[t][i] = val;
                    val++;
                }
                
                t++;
                dir = 1;
            }
            else if(dir == 1)
            {
                for(int i = t; i <= b; i++)
                {
                    res[i][r] = val;
                    val++;  
                }
                
                r--;
                dir = 2;
            }
            else if(dir == 2)
            {
                for(int i = r; i >= l; i--)
                {
                    res[b][i] = val;
                    val++;
                }
                b--;
                dir = 3;
            }
            else if(dir == 3)
            {
                for(int i = b; i >= t; i--)
                {
                    res[i][l] = val;
                    val++;
                }
                l++;
                dir = 0;
            }
        }
        
        return res;
        
    }
};