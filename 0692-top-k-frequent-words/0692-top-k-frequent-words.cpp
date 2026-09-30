class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> freq; 

        for(string word : words){
            freq[word]++; 
        }


        map<int,vector<string> , greater<int>> mapper; 


        for(auto it : freq){
            mapper[it.second].push_back(it.first);
        }


        vector<string> ans; 
        int counter = 0;
        for(auto it : mapper){
            sort(it.second.begin(), it.second.end()); 
             for(int i = 0; i < it.second.size(); i++){
                if(counter >= k) return ans;
                ans.push_back(it.second[i]);
                counter++;
             }
        }

        return ans;
    }
};