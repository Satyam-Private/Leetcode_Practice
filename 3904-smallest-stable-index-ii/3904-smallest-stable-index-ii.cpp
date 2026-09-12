class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> maxArr; 

        vector<int> minArr; 
        int maxNum = INT_MIN; 
        int minNum = INT_MAX;
        int start = 0, end = nums.size()-1; 
        while(start < nums.size()){ 
            maxNum = max(maxNum , nums[start]);
            minNum = min(minNum, nums[end]);

            maxArr.push_back(maxNum); 
            minArr.push_back(minNum); 
            start++; 
            end--;
        }

        reverse(minArr.begin() , minArr.end());
        for(int i = 0; i < nums.size(); i++){ 
            // cout<<minArr[i];
            int score = maxArr[i] - minArr[i]; 

            if(score <= k){
                return i; 
            }
        }
        return -1; 
    }
};