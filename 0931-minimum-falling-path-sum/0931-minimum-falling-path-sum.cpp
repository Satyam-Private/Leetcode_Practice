class Solution {
public: 
    const int INF = 1e9;
    int solve(vector<vector<int>> &matrix , int m , int i , int j  , vector<vector<int>> &dp){
        if(j < 0 || j >= m) return INF; 
        if(i == m - 1) return matrix[i][j]; 
        if(dp[i][j] != INT_MAX) return dp[i][j];  

        int lefD = matrix[i][j] + solve(matrix , m , i+1 , j - 1 , dp); 

        int down = matrix[i][j] + solve(matrix , m , i + 1 , j , dp); 

        int rightD = matrix[i][j] + solve(matrix , m , i+1 , j + 1 , dp); 
        
        return dp[i][j] = min({lefD , down , rightD});


    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int m = matrix.size(); 
        vector<vector<int>> dp( m , vector<int>(m , INT_MAX));
        int minSum = solve(matrix , m , 0 , 0  , dp); 
        for(int i = 1; i < m; i++){
            minSum = min(minSum , solve(matrix , m , 0 , i , dp)); 
        }

        return minSum;  

        
    }
};