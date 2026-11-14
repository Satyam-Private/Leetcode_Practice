class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> mapping;

        for(int i = 0; i < s.size(); i++){
            mapping[s[i]] = i; 
        }

        vector<int> ans; 
        int count = 0; 
        int maxInd = mapping[s[0]];
        for(int i = 0; i < s.size(); i++){
            count++; 
            if(i == maxInd){
                ans.push_back(count); 
                if(i < s.size() - 1){
                    maxInd =  mapping[s[i+1]];
                }
                count = 0; 
            }

            maxInd = max(maxInd , mapping[s[i]]); 
        }

        return ans;
    }
};