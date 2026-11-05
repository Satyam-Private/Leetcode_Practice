class Solution {
public:
    string largestOddNumber(string num) {
        int end = num.size()-1; 


        while(end >= 0){
            string temp(1, num[end]);      // constructor: 1 copy of the char

            cout<<temp;
            if(stoi(temp) % 2 != 0){
                break; 
            }
            end--; 
        }

        string ans = ""; 

        for(int i = 0; i <= end; i++){
            ans += num[i];
        }

        return ans;
    }
};