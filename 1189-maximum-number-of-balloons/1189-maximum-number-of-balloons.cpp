class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> freq; 

        string s1 = "balon"; 

        for(char ch : s1) freq[ch] = 0; 
        for(char ch : text){
            if(ch == 'b' || ch == 'a' || ch == 'l' || ch == 'o' || ch == 'n'){
                freq[ch]++;
            }
        }

        int minCount = INT_MAX;

        for(auto it : freq){
            if(it.first == 'l' || it.first == 'o'){ 
                minCount = min(minCount , it.second / 2);
            }

            else{
                minCount = min(minCount , it.second); 
            }
        }

        return minCount;
    }
};