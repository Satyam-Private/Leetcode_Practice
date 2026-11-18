class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int sizeS = s.size() , sizeP = p.size(); 
        if(sizeP > sizeS) return {}; 
        vector<int> ans; 

        vector<int> freqS(26, 0); 
        vector<int> freqP(26, 0); 

        int start = 0, end = 0; 

        while(end < sizeP){
            freqS[s[end] - 'a']++; 
            freqP[p[end] - 'a']++; 
            end++; 
        
        }
        if(freqS == freqP) ans.push_back(start); 
        
        while(end < s.size()){
            freqS[s[end] - 'a']++; 
            freqS[s[start] - 'a']--; 
            start++; 
            if(freqS == freqP) ans.push_back(start); 

            
            end++; 
            
        }
        return ans; 
    }
};