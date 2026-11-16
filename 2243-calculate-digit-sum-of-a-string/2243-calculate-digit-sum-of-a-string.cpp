class Solution {
public:
    string digitSum(string s, int k) {

        while(s.size() > k) {

            string temp = "";

            int count = 0;
            int sum = 0;

            for(int i = 0; i < s.size(); i++) {

                sum += s[i] - '0';
                count++;

                if(count == k) {
                    temp += to_string(sum);
                    sum = 0;
                    count = 0;
                }
            }

            // Process remaining characters
            if(count > 0) {
                temp += to_string(sum);
            }

            s = temp;
        }

        return s;
    }
};