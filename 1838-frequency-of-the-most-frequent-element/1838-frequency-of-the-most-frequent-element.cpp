class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin() , nums.end()); 


        int start = 0, end = 0;

        vector<long long> windowSums(nums.size() , 0); 

        windowSums[0] = nums[0]; 

        for(int i = 1; i < nums.size(); i++){
            windowSums[i] = windowSums[i-1] + nums[i];
        }
        int maxWindowSize = 1;
        while(start <= end && end < nums.size()){
            long long windowSum = windowSums[end]; 
            if(start != 0){
                windowSum = windowSums[end] - windowSums[start-1]; 
            }
            long long cost = 1LL*nums[end]*(end - start + 1)  - windowSum;


            while(cost > k){

                start++; 
                windowSum = windowSums[end]; 
            if(start != 0){
                windowSum = windowSums[end] - windowSums[start-1]; 
            }
                cost = 1LL*nums[end]*(end - start + 1)  - windowSum;


            }

            maxWindowSize = max(maxWindowSize , (end - start + 1)); 

            end++; 

        }

        return maxWindowSize;
    }
};