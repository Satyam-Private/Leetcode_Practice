class Solution {
public:
    int countCommas(int n) {

        if(n <= 999) return 0; 
        int ans = 0; 
        for(int i = 1000; i <= n; i++){
            string digits = to_string(i); 
            
            ans += (digits.size()-1)  / 3;

        }

        return ans;
         
    }
};