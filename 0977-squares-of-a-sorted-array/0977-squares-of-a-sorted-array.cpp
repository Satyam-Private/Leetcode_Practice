class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int start = 0, end = nums.size()-1; 
        vector<int> ans(nums.size() , 0); 
        int iterator = nums.size()-1; 
        while(start <= end){
            int firstSq = nums[start]*nums[start]; 
            int secondSq = nums[end]*nums[end]; 

            if(firstSq > secondSq){
                ans[iterator] = firstSq; 
                iterator--; 
                start++; 

            }
            else if(secondSq > firstSq){
                ans[iterator] = secondSq; 
                iterator--; 
                end--; 
            }
            else{
               ans[iterator] = secondSq;
                end--;
                iterator--; 
            }
        }

        return ans;
    }
};