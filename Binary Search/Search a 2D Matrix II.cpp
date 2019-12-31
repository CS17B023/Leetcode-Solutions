/*Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.
Example:

Consider the following matrix:

[
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]
Given target = 5, return true.

Given target = 20, return false.*/


class Solution {
public:
    
    bool searchMatrix(vector<vector<int>>& a, int target) 
    {
        if(a.size() == 0)
            return false;
        int row = 0;
        int column =  a[0].size() - 1;
        while(row != a.size() && column != a[0].size() && row >= 0 && column >= 0)
        {
            if(a[row][column] == target)
                return true;
            else if(a[row][column] < target)
                row++;
            else
                column--;
        }
        return false;
    }
};

