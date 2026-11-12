class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int maxInc = INT_MIN; 

        int maxDec = INT_MIN; 

        int count = 1; 
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > nums[i-1]){
                count++; 
            }
            else{
                maxInc = max(maxInc , count); 
                count = 1; 
            }
        }
         maxInc = max(maxInc , count); 
         count = 1; 
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < nums[i-1]){
                count++; 
            }
            else{
                maxDec = max(maxDec , count);
                count = 1; 
            }
        }
        maxDec = max(maxDec , count);

        return max(maxInc , maxDec); 
    }
};