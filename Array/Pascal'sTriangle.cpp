/*Given a non-negative integer numRows, generate the first numRows of Pascal's triangle.

Example:

Input: 5
Output:
[
     [1],
    [1,1],
   [1,2,1],
  [1,3,3,1],
 [1,4,6,4,1]
]*/


class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
        vector<vector<int>> res;
        if(numRows == 0)
            return res;
        
        if(numRows == 1)
        {
            vector<int> temp;
            temp.push_back(1);
            res.push_back(temp);
            return res;
        }
        
        int j = 1;
        vector<int> temp1 = {1};
        vector<int> temp2;
        res.push_back(temp1);
        
        
        while(j < numRows)
        {
            if(temp1.size() == 1)
            {
                temp2.push_back(1);
                temp2.push_back(1);
                temp1 = temp2;
                res.push_back(temp2);
                temp2.clear();
            }
            else
            {
                temp2.push_back(1);
                for(int i = 0; i < temp1.size() - 1; i++)
                {
                    temp2.push_back(temp1[i] + temp1[i+1]);
                }
                temp2.push_back(1);
                temp1 = temp2;
                res.push_back(temp2);
                temp2.clear();
            }
            
            j++;
        }
        
        return res;
    }
};