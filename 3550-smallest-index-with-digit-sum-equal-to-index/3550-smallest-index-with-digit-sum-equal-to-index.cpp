class Solution {
public:

    bool check(int num , int i){ 
        int sum = 0; 

        while(num > 0){
            sum += num % 10; 
            num = num / 10;  
        }

        if(sum == i){
            return true;
        }
        else return false;
    }
    int smallestIndex(vector<int>& nums) {
        int ans = -1;

        for(int i = 0; i < nums.size(); i++){
            if(check(nums[i] , i)){
                ans = i; 

                break; 
            }
        }

        return ans;
    }
};