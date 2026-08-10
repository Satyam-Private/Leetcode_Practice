class Solution {
public:
    int addDigits(int num) {
        if(num <= 9) return num; 


        while(num > 9){
            int sum = 0; 

            while(num > 0){
                sum += num % 10; 

                num = num / 10; 
            }

            num = sum; 
        }

        return num; 
    }
};