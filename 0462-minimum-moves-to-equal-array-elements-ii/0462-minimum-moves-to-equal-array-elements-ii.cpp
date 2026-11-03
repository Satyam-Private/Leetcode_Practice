class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int sum = 0; 

        sort(nums.begin(), nums.end()); 

        int med = nums[nums.size() / 2]; 

        int count = 0;

        for(int i : nums){
            count += abs(med - i); 
        }

        return count;
    }
};