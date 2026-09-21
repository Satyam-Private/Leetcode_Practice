class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size() == 0){ 
            return 0; 
        }
        sort(nums.begin() , nums.end()); 


        int maxSeq = 1; 
        int seq = 1; 

        for(int i = 1; i < nums.size(); i++){ 
            if(nums[i] == nums[i-1]){
                continue;
            }
            else if(nums[i] == nums[i-1]+1){
                seq++; 
            }
            else{
                maxSeq = max(maxSeq , seq); 
                seq = 1; 
            }

            maxSeq = max(maxSeq , seq);
        }

        return maxSeq; 
    }
};