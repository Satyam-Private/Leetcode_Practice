class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> freq; 

        for(char ch : s){
            freq[ch]++; 
        }


        int n = s.size(); 
        vector<string> bucket(n+1); 

        for(auto it : freq){ 
            int myFreq = it.second;
            char ch = it.first; 


            bucket[myFreq].append(myFreq , ch); 
    
          }

            string ans = ""; 
          for(int i = n; i >= 0; i--){ 
            ans.append(bucket[i]); 

          }

            return ans;
    }
};