class Solution {
public:

    int daysReq(int capacity, vector<int>& weights) {

        int days = 1;
        int currWeight = 0;

        for (int w : weights) {

            if (currWeight + w > capacity) {
                days++;
                currWeight = w;
            }
            else {
                currWeight += w;
            }
        }

        return days;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        int low = *max_element(weights.begin(), weights.end());

        int high = accumulate(weights.begin(),
                              weights.end(), 0);

        int minWeight = high;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            if (daysReq(mid, weights) <= days) {
                minWeight = mid;
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return minWeight;
    }
};