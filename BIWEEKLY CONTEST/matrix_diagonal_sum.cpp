//https://leetcode.com/contest/biweekly-contest-34/problems/matrix-diagonal-sum/
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n  = mat.size();
        int total_sum = 0 ;
        for(int i = 0 ; i<n;++i)
           total_sum =total_sum+ mat[i][i]+mat[n-i-1][i];
                
        
        if(n&1)
            total_sum = total_sum - mat[n/2][n/2];
        return total_sum;
    }
        
       
    
};