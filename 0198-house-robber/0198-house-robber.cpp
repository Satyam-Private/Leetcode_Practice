class Solution {
public:
    int solve(vector<int> &nums , int ind , vector<int> &dp){
        if(ind >= nums.size()) return 0; 
        if(dp[ind] != -1) return dp[ind]; 
        int take = nums[ind] + solve(nums , ind+2 , dp); 
        int notTake = solve(nums , ind+1, dp); 

        return dp[ind] = max(take , notTake); 
    }
    int rob(vector<int>& nums) {
        int n = nums.size(); 

        if(n == 1) return nums[0]; 
        if(n == 2) return max(nums[0] , nums[1]); 

        vector<int> dp(n+1,-1);

        // int ans = solve(nums , 0 , dp); 

        dp[n-1] = nums[n-1]; 
        dp[n] = 0; 

        for(int i = n - 2; i >= 0; i--){
            dp[i] = max(nums[i] + dp[i+2] , dp[i+1]); 
        }
        return dp[0]; 
    }
};