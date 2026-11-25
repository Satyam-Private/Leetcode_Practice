class Solution {
public:

    int solve(vector<int> &nums , int ind , int n , vector<int> &dp){
        if(ind >= n) return 0; 

        if(dp[ind] != -1) return dp[ind]; 
        int take = nums[ind] + solve(nums , ind+2 , n , dp); 
        int notTake = solve(nums , ind+1 , n , dp); 

        return dp[ind] = max(take , notTake); 
    }

    int findAns(vector<int> &nums , int n){
        vector<int> dp1(n+1 , -1);
        vector<int> dp2(n+1 , -1);
        int take = solve(nums , 0 , n-1 , dp1); 
        int notTake = solve(nums , 1, n , dp2); 

        return max(take  ,notTake); 
    }
    int rob(vector<int>& nums) {
        int n = nums.size(); 

        if(n <= 3){
            int maxE = nums[0]; 

            for(int  i = 0; i  <n ; i++){
                maxE = max(maxE , nums[i]); 
            }

            return maxE; 
        }
        int flag = 0; 
        int ans = findAns(nums ,n); 

        return ans; 


    }
};