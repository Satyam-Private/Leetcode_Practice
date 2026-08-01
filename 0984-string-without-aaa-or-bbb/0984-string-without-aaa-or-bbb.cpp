class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string ans = "";

        int countA = 0, countB = 0;
        while (a > 0 && b > 0) {
            if (a > b) {
                if (countA < 2) {
                    ans += 'a';
                    a--;
                    countA++;
                    countB = 0;
                } else if (countB < 2) {
                    ans += 'b';
                    b--;
                    countB++;
                    countA = 0;
                }
            } else {
                if (countB < 2) {
                    ans += 'b';
                    b--;
                    countB++;
                    countA = 0;
                } else {
                    if (countA < 2) {
                        ans += 'a';
                        a--;
                        countA++;
                        countB = 0;
                    }
                }
            }
        }

        while (a) {
            ans += 'a';
            a--;
        }

        while (b) {
            ans += 'b';
            b--;
        }
        return ans;
    }
};