class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        if(k == 1){
           unordered_map<int,int> freqMap; 
           for(int i : nums){
                freqMap[i]++;
           }
           int largest = -1; 
           for(auto it : freqMap){
                if(it.second == 1){
                    largest = max(largest , it.first);
                }
           }
           return largest;
        }
        else if(k == nums.size()){
            int largest = -1; 
            for(int i : nums){
                largest = max(largest , i); 
            }
            return largest;
        }

        else{
            unordered_map<int,int> freqMap; 

            for(int i : nums){
                freqMap[i]++; 
            }

            
            int ans = -1;
            if(freqMap[nums[0]] == 1){
                ans = nums[0];
            }

            if(freqMap[nums[nums.size()-1]] == 1 && nums[nums.size()-1] > ans){
                ans = nums[nums.size()-1];
            }

            return ans;
        }
        return -1;
    }
};