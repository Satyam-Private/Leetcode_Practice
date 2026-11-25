class Solution {
public:
    long long solve(vector<vector<int>>& questions , int n , int ind , vector<long long> &dp){
        if(ind >= n) return 0; 
        if(dp[ind] != -1) return dp[ind]; 
        long long take = questions[ind][0] + solve(questions , n , ind + questions[ind][1] + 1 , dp); 

        long long notTake = solve(questions , n , ind+1 , dp); 

        return dp[ind] = max(take,notTake); 
    }
    long long mostPoints(vector<vector<int>>& questions) {
        int n = questions.size(); 

        vector<long long> dp(n+1 , -1); 
        // long long ans = solve(questions , n , 0 , dp); 
        
        dp[n-1] = questions[n-1][0]; 


        for(int i = n - 2; i >= 0; i--){
            long long sum = 0; 
            int ind = i + questions[i][1] + 1; 
            if(ind < n) sum = dp[ind];   
            long long take = questions[i][0] + sum; 
            long long notTake = dp[i+1]; 

            dp[i] = max(take , notTake); 
        }
        return dp[0]; 
    }
};