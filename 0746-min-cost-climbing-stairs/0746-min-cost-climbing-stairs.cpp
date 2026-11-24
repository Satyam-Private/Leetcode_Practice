class Solution {
public:
    int solve(vector<int> &cost , int ind , vector<int> &dp){
        if(dp[ind] != -1) return dp[ind]; 
        if(ind >= cost.size()) return 0; 

        int one = cost[ind] + solve(cost , ind+1 , dp); 
        int two = cost[ind] + solve(cost , ind+2 , dp) ;

        return dp[ind] = min(one , two); 
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size(); 
        vector<int> dp(n + 2 , -1); 
        // int firstS = solve(cost , 0 , dp); 
        // int secondS = dp[1];


        dp[n+1] = 0; 
        dp[n] = 0; 
        dp[n-1] = cost[n-1]; 

        for(int i = n - 2; i >= 0; i--){
            dp[i] = min(cost[i] + dp[i+1] , cost[i] + dp[i+2]); 
        }
 
        // return min(firstS , secondS); 
        return min(dp[0] , dp[1]); 
    }
};