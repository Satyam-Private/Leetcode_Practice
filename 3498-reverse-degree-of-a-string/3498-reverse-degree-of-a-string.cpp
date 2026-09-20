class Solution {
public:
    int reverseDegree(string s) {
        int degree = 0; 

        for(int i = 0; i  < s.size(); i++){ 
            int value = 26 - (s[i] - 'a'); 

            degree += value * (i+1);
        }

        return degree;
    }
};