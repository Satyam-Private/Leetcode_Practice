class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {

        int i = 0;
        int curr = 1;
        vector<int> missing;

        while (missing.size() < k) {

            if (i < arr.size() && curr == arr[i]) {
                i++;
            } else {
                missing.push_back(curr);
            }

            curr++;
        }

        return missing[k - 1];
    }
};