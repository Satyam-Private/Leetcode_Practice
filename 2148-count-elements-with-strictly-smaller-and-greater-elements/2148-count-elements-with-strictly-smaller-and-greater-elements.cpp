class Solution {
public:
    int countElements(vector<int>& nums) {
        int smallestEle = INT_MAX; 

        int largestEle = INT_MIN; 


        for(int i = 0; i < nums.size(); i++){
            smallestEle = min(smallestEle , nums[i]); 
            largestEle = max(largestEle , nums[i]); 
        }

        int count = 0; 


        for(int i  = 0; i  < nums.size(); i++){
            if(nums[i] < largestEle && smallestEle < nums[i]){
                count++; 
            }
        }

        return count; 
    }

};