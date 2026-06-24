class Solution {
public:

    int getSum(vector<int> &nums , int divisor){
        int divisionSum = 0; 

        for(int i : nums){ 
            divisionSum += ceil((float) i / divisor); 
        }
        return divisionSum; 
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = *max_element(nums.begin(), nums.end()); 

        int minDivisor = 0;
        while(low <= high){ 
            int mid = low + (high - low) / 2; 

            if(getSum(nums , mid) <= threshold){ 
                minDivisor = mid; 
                high = mid -1;
            }
            else{ 
                low = mid + 1;
            }
        }
        return minDivisor; 
    }
};