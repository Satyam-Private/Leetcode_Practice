class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int start = 0, end = 0; 
        int count = 0; 
        for(int start = 0; start < nums.size(); start++){ 
            int targetCount = 0; 
            for(int end = start; end < nums.size(); end++){ 
                if(nums[end] == target){ 
                    targetCount++; 
                }

                int len = end - start + 1;  
                if(targetCount > len/2){
                    count++; 
                }

            }
        }
        return count; 
    }
};