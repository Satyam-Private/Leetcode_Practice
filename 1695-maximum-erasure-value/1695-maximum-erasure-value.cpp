class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> st; 

        int start = 0, end = 0; 
        int maxSum = 0 , sum = 0;
        while( end < nums.size()){ 
            if(st.count(nums[end]) == 0){
                 sum += nums[end]; 
                 st.insert(nums[end]);
                 end++; 
            }
            else{
                while(st.count(nums[end])){
                    sum -= nums[start]; 
                    st.erase(nums[start]);  
                    start++;
                }
            }
            maxSum = max(maxSum , sum); 
        }

        return maxSum;
    }
};