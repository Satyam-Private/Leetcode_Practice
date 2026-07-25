class Solution {
public:
    int maxProduct(int n) {
        vector<int> digits;

        while (n > 0) {
            digits.push_back(n % 10);

            n = n / 10;
        }

        int max = INT_MIN;
        int smax = 0;

        for (int i = 0; i < digits.size(); i++) {
            if (digits[i] > max) {
                smax = max;
                max = digits[i];
            } else if (digits[i] > smax) {
                smax = digits[i];
            }
        }
        int size = digits.size();
        return smax * max;
    }
};