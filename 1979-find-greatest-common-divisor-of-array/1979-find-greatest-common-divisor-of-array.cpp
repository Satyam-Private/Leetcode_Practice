class Solution {
public:
    int findGCD(vector<int>& nums) {
        int smallest = INT_MAX; 
        int largest = INT_MIN; 

        for(int i = 0; i < nums.size(); i++){ 
            smallest = min(nums[i] , smallest); 
            largest = max(nums[i] , largest); 
        }

        return gcd(smallest , largest); 
    }
};