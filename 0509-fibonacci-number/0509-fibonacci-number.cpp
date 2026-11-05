class Solution {
public:
    int calFib(int n, vector<int> &dp){
                if (n <= 1) {
            return n;
        }
        if(dp[n] != -1) return dp[n]; 

        dp[n] = calFib(n-1, dp) + calFib(n-2 , dp); 

        return dp[n];
    }
    int fib(int n) {
        vector<int>dp(n+1,-1); 
        int ans  = calFib(n , dp); 

        return ans;
    }
};  