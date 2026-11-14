class Solution {
public:
    int partitionString(string s) {
        vector<int> flags(26, 0);

        int count = 1;

        for(int i = 0; i < s.size(); i++) {
            int ind = s[i] - 'a';

            if(flags[ind] != 0) {
                count++;
                flags.assign(26, 0);
            }

            flags[ind] = 1;
        }

        return count;
    }
};