class Solution {
public:
    int maximumLengthSubstring(string s) {
        int freqArr[26] = {0};

        int start = 0;
        int maxLen = 0;

        for (int end = 0; end < s.size(); end++) {

            freqArr[s[end] - 'a']++;

            while (freqArr[s[end] - 'a'] > 2) {
                freqArr[s[start] - 'a']--;
                start++;
            }

            int len = end - start + 1;
            maxLen = max(maxLen, len);
        }

        return maxLen;
    }
};