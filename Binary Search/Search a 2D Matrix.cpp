/*Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.
Example 1:

Input:
matrix = [
  [1,   3,  5,  7],
  [10, 11, 16, 20],
  [23, 30, 34, 50]
]
target = 3
Output: true
Example 2:

Input:
matrix = [
  [1,   3,  5,  7],
  [10, 11, 16, 20],
  [23, 30, 34, 50]
]
target = 13
Output: false*/


class Solution {
public:
    int binarySearch(vector<int>a,int left,int right,int x)
    {
        if(left > right)
            return -1;
        int mid = (left + right)/2;
        if(a[mid] == x)
            return mid;
        else if(a[mid] > x)
            return binarySearch(a,left,mid-1,x);
        else
            return binarySearch(a,mid+1,right,x);
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
        for(int i = 0; i < matrix.size(); i++)
        {
          int res =  binarySearch(matrix[i],0,matrix[i].size()-1,target);
            if(res != -1)
                return true;
        }
        return false;
    }
};