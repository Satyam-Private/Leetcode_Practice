class Solution {
public:
    const int INF = 1e9;
    int solve(vector<vector<int>>& grid , int m , int n , int i , int j , vector<vector<int>>&dp){
        if(i >= m || j >= n) return INF; 
        if(i == m - 1 && j == n - 1){
            return grid[i][j]; 
        }
        if(dp[i][j] != -1) return dp[i][j]; 
        int right = grid[i][j] + solve(grid , m , n , i , j+1, dp); 

        int down = grid[i][j] + solve(grid , m , n , i + 1 , j ,dp);
         
        return dp[i][j] = min(right , down); 

    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size(); 
        int n = grid[0].size(); 
        vector<vector<int>> dp(m+1 , vector<int>(n+1 , -1)); 
        int ans = solve(grid , m , n , 0 , 0 , dp); 
        return ans; 
    }
};