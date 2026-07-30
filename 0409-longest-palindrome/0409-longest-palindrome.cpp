class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> freq;
        int size = s.size(); 

        if(size <= 1) return size; 
        for(char ch : s){ 
            freq[ch]++; 
        }

        int count = 0; 
        bool hasOdd = false;; 
        for(auto it : freq){ 
            if(it.second % 2 == 0) count += it.second; 
            // cout<<count;
            else if(it.second % 2 == 1){
               count += it.second - 1; // use the even part
                hasOdd = true;
                
            }
            // cout<<it.first<<it.second;
        }

        if(hasOdd){
            count++; 
        }
 

        return count; 


    }
};