class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {

        vector<int> ans;

        int num = 1; 
        while(num <= 8){ 
            int temp = num;
            while (num <= high) {
                int lastDigit = num % 10; 
                if(lastDigit == 9) break; 
                num = num * 10 + (lastDigit + 1);

                if(num >= low && num <= high){ 
                    ans.push_back(num); 
                }
            }
            num = temp+1;
        }

        sort(ans.begin() , ans.end()); 

        return ans; 
    }
};