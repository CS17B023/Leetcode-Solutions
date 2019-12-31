/*Given an array A of non-negative integers, return an array consisting of all the even elements of A, followed by all the odd elements of A.

You may return any answer array that satisfies this condition.

 

Example 1:

Input: [3,1,2,4]
Output: [2,4,3,1]
The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.
 

Note:

1 <= A.length <= 5000
0 <= A[i] <= 5000*/


class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A)
    {
        int low = 0;
        int high = A.size() - 1;
        while(low<high)
        {
            if((A[low]%2) > (A[high]%2))
            {
                int temp = A[low];
                A[low]   = A[high];
                A[high]  = temp;
                // low++;
                // high--;
            }
            if(A[low]%2 == 0)
                low++;
            if(A[high]%2 == 1)
                high--;
        }
        return A;
        
    }
};