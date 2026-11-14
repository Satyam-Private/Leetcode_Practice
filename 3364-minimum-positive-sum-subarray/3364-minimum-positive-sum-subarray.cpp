class Solution {
public:
    int calMinSum(vector<int> &nums, vector<int> preSum , int windowSize){
        int start = 0 , end = start + windowSize - 1;
        int minSum = INT_MAX; 
        int sum = 0; 
        
        while(end < nums.size()){
            sum = 0;
            if(start == 0){
                sum += preSum[end]; 
            }
            else{
                sum += preSum[end] - preSum[start-1]; 
            }
            start++; 
            end++; 

            cout<<sum<<" "<<endl;
            if(sum > 0){
                minSum = min(sum  , minSum );
            } 
        }

        return minSum; 
    }
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        vector<int> prefixSum(nums.size() , 0); 
        prefixSum[0] = nums[0]; 
        for(int i = 1; i < nums.size(); i++ ){
            prefixSum[i] = prefixSum[i-1] + nums[i]; 
        }

        
        vector<int> sums;  
        for(int i = l; i <= r; i++){
            int sum = calMinSum(nums , prefixSum , i);

            if(sum > 0){
                sums.push_back(sum); 
            }

        }
        int temp = INT_MAX; 

        
        for(int i = 0; i < sums.size(); i++){
            if(sums[i] > 0){
                temp = min(sums[i] , temp); 
            }
        }
        if(temp == INT_MAX){
            return -1; 
        }

        return temp; 
    }
};