class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size(); 

        if(n == 2){
            return nums[0] + nums[1]; 
        }
        sort(nums.begin() , nums.end()); 
        int ans = nums[0] + nums[n-1]; 

        int start = 0 , end = n -1; 

        while(start < end){
            ans = max(ans , nums[start] + nums[end]); 
            start++; 
            end--; 
        }
        return ans; 

    }
};