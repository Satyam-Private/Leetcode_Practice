class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_map<int,int> freqM; 
        int left = 0, right = 0; 
        int maxScore  = 0; 
        int score = 0; 
        while(right < nums.size()){
            freqM[nums[right]]++; 
            
            while(freqM[nums[right]] > 1){
                freqM[nums[left]]--; 
                score -= nums[left]; 
                left++; 
            }
            
            score += nums[right]; 
            maxScore = max(maxScore  , score); 
            right++; 

        }

        return maxScore; 
    }
};