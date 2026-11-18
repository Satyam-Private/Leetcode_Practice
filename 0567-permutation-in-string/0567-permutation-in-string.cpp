class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int sizeS1 = s1.size() , sizeS2 = s2.size(); 

        if(sizeS2 < sizeS1) return false; 

        int start = 0, end = 0; 
        vector<int> freqS1(26 , 0);
        vector<int> freqS2(26 , 0);

        while(end < sizeS1){
            freqS1[s1[end]-'a']++;
            freqS2[s2[end]-'a']++;
            end++; 
        }

        if(freqS1 == freqS2) return true; 

        while(end < sizeS2){
            freqS2[s2[end]-'a']++; 
            freqS2[s2[start]-'a']--; 
            start++;

            if(freqS1 == freqS2) return true; 

            end++; 

        }
        return false; 
        
    }
};