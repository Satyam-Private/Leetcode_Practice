class Solution {
public:
    int compress(vector<char>& chars) {

        if(chars.size() == 1) return 1; 
        string ans = ""; 

        char currChar; 


        int start = 0; 
        currChar = chars[start]; 
        int freq = 0; 
        while(start < chars.size()){ 
            if(currChar == chars[start]){
                freq++; 
            }
            else if(currChar != chars[start]){
                if(freq == 1){
                    ans += currChar; 
                }
                else if(freq > 1){
                    ans += currChar; 
                    ans += to_string(freq); 
                }

                freq = 1; 
                currChar = chars[start];
            }

            start++; 
        }
       if(freq == 1){
        ans += currChar; 
       }
       else if(freq > 1){
           ans += currChar; 
        ans += to_string(freq); 
       }
        for(int i = 0; i < ans.size(); i++){
            chars[i] = ans[i]; 
        }

        return ans.size(); 
    }
};