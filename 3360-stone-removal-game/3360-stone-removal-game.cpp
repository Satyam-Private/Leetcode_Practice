class Solution {
public:
    bool canAliceWin(int n) {
        int start = 10; 
        int count = 1; 
        while(start <= n){
            n = n - start; 
            start--; 
            count++; 
        }

        if(count % 2 == 0) return true;
        return false;
    }
};