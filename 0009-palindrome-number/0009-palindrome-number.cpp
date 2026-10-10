class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }

        vector<int> digits; 

        while(x > 0){
            int digit = x % 10; 

            x = x / 10; 

            digits.push_back(digit); 
        }

        int start = 0; 
        int end = digits.size()-1;

        while(start <= end){
            if(digits[start] != digits[end]){
                return false;
            }

            start++; 
            end--; 
        }

        return true;
    }
};