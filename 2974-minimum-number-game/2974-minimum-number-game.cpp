class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
       vector<int> ans; 

       sort(nums.begin() ,  nums.end()); 


       int first = 0 , second = 1; 


       while(second < nums.size()){
        ans.push_back(nums[second]); 
        ans.push_back(nums[first]); 
        first += 2; 
        second += 2;
       } 

       return ans; 
    }
};