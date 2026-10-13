class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {

        if(nums.size() == 1) return nums[0]*nums[0]; 

        if(nums.size() == 2){
            nums[0] = abs(nums[0]);
            nums[1] = abs(nums[1]);
            int maxE = max(nums[0] , nums[1]); 
            int minE = min(nums[0] , nums[1]); 

            return (maxE*maxE - minE*minE); 
        }
        vector<int> temp; 
        for(int i : nums){
            temp.push_back(abs(i)); 
        }

        sort(temp.begin() , temp.end()); 
        int start = 0, end = temp.size() , mid = 0; 
        if(temp.size() % 2 == 0){
            mid = (temp.size() / 2) - 1; 
        }
        else {
           mid = (temp.size() / 2) - 1; 
        }

        long long ans = 0; 

        for(int i = start; i <= mid; i++){
            ans -= temp[i]*temp[i]; 
        }

        for(int i = mid+1; i < end; i++ ){
            ans += temp[i] * temp[i]; 
        }

        return ans;


    }
};