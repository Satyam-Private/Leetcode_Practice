class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin() , nums.end()); 
        int size = nums.size(); 

        int maxPerimeter = 0; 

        int lr = size-1; 
        int slr = size-2; 
        int tlr = size-3; 

        int perimeter = 0; 
        while(lr >= 0 && slr >= 0 && tlr >= 0){ 
            if(nums[tlr] + nums[slr] > nums[lr]){
                perimeter = nums[tlr] + nums[slr] + nums[lr]; 
                maxPerimeter = max(maxPerimeter , perimeter); 
                break; 
             }
             else{ 
                lr--; 
                slr--; 
                tlr--; 
             }

        }
        return maxPerimeter; 

    }
};