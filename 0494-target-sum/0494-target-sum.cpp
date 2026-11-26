class Solution {
public:
    void solve(vector<int> &nums , int target , int sum , int ind , int n , int &count){
        if(ind == n ){
            if(sum == target) {
                count++; 
            }
            return; 
        }

        solve(nums , target , sum + nums[ind] , ind + 1, n , count); 
        solve(nums , target , sum - nums[ind] , ind + 1 , n , count);  
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0; 
        int n = nums.size(); 
        int count = 0; 
        solve(nums , target , sum , 0 , n , count); 

        return count; 
    }
};