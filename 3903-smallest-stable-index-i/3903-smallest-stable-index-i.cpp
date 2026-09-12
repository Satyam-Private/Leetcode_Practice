class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maxI = INT_MIN; 
        int minI = INT_MAX; 

        for(int i = 0; i < nums.size(); i++){ 
            maxI = max(maxI , nums[i]); 
            minI = INT_MAX; 
            for(int j = i; j < nums.size(); j++){ 
                minI = min(minI , nums[j]); 
            }
            // cout<<maxI<<" "<<minI; 
            int score = maxI - minI; 
            cout<<score; 
            if(score <= k){ 
                return i; 
            }
        }
        return -1; 
    }
};