class Solution {
public:
    int maxProduct(int n) {
        vector<int> digits; 

        while(n > 0){ 
            digits.push_back(n % 10); 

            n = n / 10; 
        }

        sort(digits.begin() , digits.end());
        int size = digits.size(); 
        return digits[size-1]*digits[size-2];
    }
};