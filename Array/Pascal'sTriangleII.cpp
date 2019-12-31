/*Given a non-negative index k where k ≤ 33, return the kth index row of the Pascal's triangle.

Note that the row index starts from 0.
Example:

Input: 3
Output: [1,3,3,1]
Follow up:

Could you optimize your algorithm to use only O(k) extra space?
*/

class Solution {
public:
    vector<int> getRow(int rowIndex)
    {
        vector<int> res;
        vector<int> temp = {1};
        
       
    
        if(rowIndex == 0)
        {
            res.push_back(1);
            return res;
        }
      
        for(int i = 0; i < rowIndex; i++)
        {
            
            if(temp.size() == 1)
            {
              res.push_back(1); 
              res.push_back(1); 
              temp.clear();
              temp = res;
              res.clear();
            }
                
            else
            {
                res.push_back(1);
                for(int k = 0; k < temp.size() - 1; k++)
                {
                    res.push_back(temp[k] + temp[k+1]);
                }
                res.push_back(1);
                temp.clear();
                temp = res;
                res.clear();
            }
        }
        return temp;
        
        
    }
};