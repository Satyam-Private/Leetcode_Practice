class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int size = nums.size(); 
        vector<int> prefixSum(size); 
        vector<int> suffixSum(size); 


        prefixSum[0] = nums[0]; 
        suffixSum[size-1] = nums[size-1]; 


        for(int i = 1; i < size; i++){ 
            prefixSum[i] = prefixSum[i-1]+nums[i]; 
        }

        for(int i = size-2; i >= 0; i--){
            suffixSum[i] = suffixSum[i+1]+nums[i]; 
        }
        int ans = -1; 

        for(int i = 0; i < size; i++){ 
            if(prefixSum[i] == suffixSum[i]){ 
                ans = i; 
                break; 
            }
        }
        return ans; 
    }
};