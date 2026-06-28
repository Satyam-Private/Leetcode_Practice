class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string st = strs[0];

        for (int i = 1; i < strs.size(); i++) {

            string newString = "";

            int len = min(st.size(), strs[i].size());

            int j = 0;

            while (j < len && st[j] == strs[i][j]) {
                newString += st[j];
                j++;
            }

            st = newString;

            if (st.empty())
                return "";
        }

        return st;
    }
};