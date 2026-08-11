class Solution {
public:
    bool findNum(int sum , vector<int> &nums){
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == sum){ 
                return true;
            }
        }
        return false;
    }
    int missingInteger(vector<int>& nums) {
        int sum = nums[0]; 


        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i-1]+1){
                sum += nums[i]; 
            }
            else{
                break; 
            }
        }

        while(findNum(sum , nums)){
            sum++; 
        }

        return sum; 
    }
};