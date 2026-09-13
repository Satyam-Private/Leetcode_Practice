class Solution {
public:
    int totalNumbers(vector<int>& digits) {

        int freq[10] = {0};

        // Count how many copies of each digit we have
        for (int d : digits) {
            freq[d]++;
        }

        int ans = 0;

        // Hundreds digit: cannot be 0
        for (int a = 1; a <= 9; a++) {

            // Tens digit
            for (int b = 0; b <= 9; b++) {

                // Units digit must be even
                for (int c = 0; c <= 9; c++) {

                    if (c % 2 != 0)
                        continue;

                    int need[10] = {0};

                    need[a]++;
                    need[b]++;
                    need[c]++;

                    bool possible = true;

                    for (int d = 0; d <= 9; d++) {
                        if (need[d] > freq[d]) {
                            possible = false;
                            break;
                        }
                    }

                    if (possible)
                        ans++;
                }
            }
        }

        return ans;
    }
};