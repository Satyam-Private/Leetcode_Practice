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
        int minSum = solve(triangle , 0  , 0 , m , dp); 
        return minSum; 
    }
};