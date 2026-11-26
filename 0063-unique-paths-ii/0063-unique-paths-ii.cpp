class Solution {
public:
    int solve(vector<vector<int>>& obstacleGrid , int  m , int n , int i , int j , vector<vector<int>> &dp){
        if(i >= m || j >= n) return 0;
        if(obstacleGrid[i][j] == 1) return 0; 
        if(i == m-1 && j == n - 1) return 1; 
        if(dp[i][j] != -1) return dp[i][j]; 
        int right = solve(obstacleGrid , m , n , i , j + 1 , dp); 
        int down = solve(obstacleGrid , m , n , i + 1 , j , dp); 

        return dp[i][j] = right + down; 
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size(); 
        int n = obstacleGrid[0].size(); 
        if(obstacleGrid[m-1][n-1] == 1) return 0; 
        vector<vector<long long>> dp(m , vector<long long>(n , -1)); 
        // int count = solve(obstacleGrid , m , n , 0 , 0  , dp); 

        dp[m-1][n-1] = 1; 
        int horizontal = 0 , index = 0; 
        for(int i = n - 2; i >= 0; i--){
            if(obstacleGrid[m-1][i] == 1){
                horizontal = 1; 
                index = i; 
                break; 
            }

            dp[m-1][i] = 1; 
        }

        if(horizontal){
                    for(int i = index; i >= 0; i--){
            dp[m-1][i] = 0; 
        }
        }
        int vertical = 0, index1 = 0; 

        for(int i = m - 2; i >= 0; i--){
            if(obstacleGrid[i][n-1] == 1){
                vertical = 1; 
                index1 = i; 
                break; 
            }
            dp[i][n-1] = 1; 
        }

        if(vertical){
            for(int i = index1; i >= 0; i--){
                dp[i][n-1] = 0; 
            }
        }

        for(int i = m - 2; i >= 0; i--){
            for(int j = n - 2; j >= 0; j--){
                if(obstacleGrid[i][j] == 1) {
                    dp[i][j] = 0; 
                }

                else{
                    dp[i][j] = dp[i+1][j] + dp[i][j+1]; 
                }
            }
        }
        // return count; 

        return dp[0][0]; 
    }
};