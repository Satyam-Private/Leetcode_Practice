class Solution {
public:
    int solve(vector<vector<int>>& triangle , int i , int j , int m , vector<vector<int>> &dp){
        if(i == m - 1) return triangle[i][j];
        if(dp[i][j] != INT_MAX) return dp[i][j]; 
        int down = triangle[i][j] + solve(triangle , i + 1 , j , m , dp);
        int right = triangle[i][j] + solve(triangle , i + 1 , j + 1 , m , dp);
        return dp[i][j] = min(down , right); 
            }
    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size(); 
        vector<vector<int>> dp( m , vector<int> (m , INT_MAX));
        // int minSum = solve(triangle , 0  , 0 , m , dp); 

        for(int i = 0; i < triangle[m-1].size(); i++){
            dp[m-1][i] = triangle[m-1][i]; 
        }


        for(int i = m - 2; i >= 0; i--){
            int n = triangle[i].size(); 

            for(int j = 0; j < n; j++){
                dp[i][j] = triangle[i][j] + min(dp[i+1][j] , dp[i+1][j+1]); 
            }
        }

        return dp[0][0]; 
        // return minSum; 
    }
};