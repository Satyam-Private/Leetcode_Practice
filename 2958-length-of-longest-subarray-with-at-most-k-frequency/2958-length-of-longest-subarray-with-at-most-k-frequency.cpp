class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {

        unordered_map<int, int> freqMap;

        int left = 0;
        int ans = 0;

        for (int right = 0; right < nums.size(); right++) {

            // 1. Add current element
            freqMap[nums[right]]++;

            // 2. If frequency exceeds k, shrink window
            while (freqMap[nums[right]] > k) {
                freqMap[nums[left]]--;
                left++;
            }

            // 3. Calculate current valid window
            int size = right - left + 1;

            ans = max(ans, size);
        }

        return ans;
    }
};