class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> freqMap; 

        for(char ch : magazine){ 
            freqMap[ch]++; 
        }

        for(int i = 0; i < ransomNote.size(); i++){ 
            if(freqMap.find(ransomNote[i]) == freqMap.end()){
                return false;
            }

            else if(freqMap[ransomNote[i]] == 0){
                return false;
            }
            else{
                freqMap[ransomNote[i]]--; 
            }
        }

        return true;
    }
};