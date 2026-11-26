class Solution {
public:
    int solve(int m ,  int n , int i , int j , vector<vector<int>> dp){
        if(i >= m || j >= n) return 0; 
        if(i == m-1 && j == n-1) return 1; 
        if(dp[i][j] != -1) return dp[i][j];

        int right = solve(m , n , i , j + 1 , dp); 
        int down = solve(m , n , i + 1 , j , dp); 

        return dp[i][j]  = right + down; 
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m+1 , vector<int> (n+1 , -1)); 
        // int ans = solve(m  , n , 0 , 0 , dp);


        dp[m-1][n-1] = 0; 

        for(int i = 0; i < n; i++){
            dp[m-1][i] = 1; 
        } 

        for(int i = 0; i < m; i++){
            dp[i][n-1] = 1;
        }

        for(int i = m - 2; i >= 0; i--){
            for(int j = n - 2; j >= 0; j--){
                dp[i][j] = dp[i][j+1] + dp[i+1][j];
            }
        }
        // return ans; 
        return dp[0][0]; 



    }
};