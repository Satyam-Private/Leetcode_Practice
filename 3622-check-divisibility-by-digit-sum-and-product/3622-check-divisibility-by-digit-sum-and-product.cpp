class Solution {
public:
    bool checkDivisibility(int n) {
        int totalSum = 0, digitSum = 0, digitMul = 1; 

        int temp = n; 

        while(temp > 0){ 
            int digit = temp % 10; 

            digitSum += digit; 
            digitMul *= digit; 

            temp = temp / 10; 
        }

        totalSum = digitSum + digitMul; 


        if(n % totalSum == 0) return true;
        return false;
    }
};