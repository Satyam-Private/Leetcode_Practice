class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans = ""; 

        if(num == 1 && sum >= 10) return ans; 

        int currInd = 0; 

        while(currInd < num){
            for(int i = 9; i >= 0; i--){
                if(i <= sum){
                    ans += to_string(i); 
                    sum -= i; 
                    break; 
                }
            }
            currInd++; 
        }

        if(sum != 0) return ""; 

        return ans; 
    }
};