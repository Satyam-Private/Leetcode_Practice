class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int size = nums.size(); 
       sort(nums.begin() , nums.end()); 
        for(int i : nums) cout<<i; 
       int firstNum = nums[size-2]; 
       int secondNum = nums[size-1]; 
       cout<<firstNum<<secondNum; 
       return (firstNum-1)*(secondNum-1);  
    }
};