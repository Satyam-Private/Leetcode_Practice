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
        int firstS = solve(cost , 0 , dp); 
        int secondS = dp[1]; 

        return min(firstS , secondS); 
    }
};