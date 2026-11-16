class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        if(nums.size() == 1) return nums[0]; 

         if(nums.size() == 2) return min(nums[0] , nums[1]); 
        while(nums.size() > 1){
            int start = 0; 
            vector<int> temp; 
            bool isMin = true;
            while(start <= nums.size() -2){
                int digit; 
                if(isMin){
                  digit = min(nums[start] , nums[start+1]); 
                  temp.push_back(digit); 
                  isMin = false; 
                  start += 2; 
                }
                else{
                    digit = max(nums[start] , nums[start+1]); 
                    temp.push_back(digit); 
                    isMin = true;
                    start += 2;
                }
            }
            for(auto it : temp){
                cout<<it<<" "; 
            }

            nums = temp; 
        }

        return nums[0]; 
    }
};