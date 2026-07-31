class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size(); 
        vector<int> LM(size); 
        vector<int> RM(size); 

        LM[0] = 1; 
        RM[size-1] = 1; 


        for(int i = 1; i < size; i++){
            LM[i] = nums[i-1]*LM[i-1]; 
        }

        for(int i = size - 2; i >= 0; i--){ 
            RM[i] = nums[i+1]*RM[i+1]; 
        }

        vector<int> ans; 

        for(int i = 0; i < size; i++){ 
            ans.push_back(RM[i]*LM[i]); 
        }

        return ans; 
    }
};