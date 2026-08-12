class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        if(nums.size() <= k){
            return nums.size(); 
        }
        
        int start = 0, end = 0; 
        unordered_map<int,int> freqMap; 

        int size = 0, maxSize = INT_MIN; 
        while(end < nums.size()){
            if(freqMap.find(nums[end]) == freqMap.end()){
                freqMap[nums[end]]++;
                end++;  
            }

            else{
                if(freqMap[nums[end]] < k){
                    freqMap[nums[end]]++; 
                    end++;
                }
                else if(freqMap[nums[end]] >= k){ 
                    
                    size = end - start; 
                    maxSize = max(size , maxSize) ;
                    freqMap[nums[start]]--; 
                    start++; 
                                    }
            }

              size = end - start; 
                    maxSize = max(size , maxSize) ;
        }
        return maxSize; 
    }
};