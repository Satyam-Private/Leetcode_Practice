
class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end());

        int MOD = 1e9 + 7;
        int n = nums.size();

        vector<int> power(n, 1);

        for(int i = 1; i < n; i++){
            power[i] = (2LL * power[i-1]) % MOD;
        }

        long long count = 0;

        int left = 0, right = n - 1;

        while(left <= right){

            int sum = nums[left] + nums[right];

            if(sum <= target){
                count = (count + power[right-left]) % MOD;
                left++;
            }
            else{
                right--;
            }
        }

        return count;
    }
};
