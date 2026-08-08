class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int startW1 = 0, startW2 = 0; 
        string ans = ""; 
        while(startW1 < word1.size() && startW2 < word2.size()){
            ans += word1[startW1]; 
            ans += word2[startW2]; 

            startW1++; 
            startW2++; 
        }

        if(startW1 < word1.size()){
            for(int i = startW1; i < word1.size(); i++){
                ans += word1[i]; 
            }
        }

        if(startW2 < word2.size()){
            for(int i = startW2; i < word2.size(); i++){
                ans += word2[i];
            }
        }

        return ans; 
    }
};