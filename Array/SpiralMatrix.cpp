/*Given a matrix of m x n elements (m rows, n columns), return all elements of the matrix in spiral order.

Example 1:

Input:
[
 [ 1, 2, 3 ],
 [ 4, 5, 6 ],
 [ 7, 8, 9 ]
]
Output: [1,2,3,6,9,8,7,4,5]
Example 2:

Input:
[
  [1, 2, 3, 4],
  [5, 6, 7, 8],
  [9,10,11,12]
]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]*/

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>>& A) 
    {
         if(A.size() == 0)
              return {};
        
         int m = A.size();
         int n = A[0].size();
         vector<int> v;
        
         if(m == 1)
         {
             for(int i = 0; i < n; i++)
                 v.push_back(A[0][i]);
             return v;
         }
         if(n == 1)
         {
             for(int i = 0; i < m; i++)
                 v.push_back(A[i][0]);
             return v;
         }
    
    int dir = 0;
    int t = 0;
    int b = m-1;
    int l = 0;
    int r = n-1;
    
    while(t <= b && l <= r)
    {
        if(dir == 0)
        {
            for(int i = l; i <= r; i++)
                v.push_back(A[t][i]);
                
            t++;
            dir = 1;
        }
        else if(dir == 1)
               {
            for(int i = t; i <= b; i++)
                 v.push_back(A[i][r]);
                
            r--;
            dir = 2;
        }
        else if(dir == 2)
        {
            for(int i = r; i >= l; i--)
                 v.push_back(A[b][i]);
            b--;
            dir = 3;
        }
        else if(dir == 3)
        {
            for(int i = b; i >= t; i--)
                 v.push_back(A[i][l]);
            
            l++;
            dir = 0;
        }
        
    }
    
    return v;
        
    }
};