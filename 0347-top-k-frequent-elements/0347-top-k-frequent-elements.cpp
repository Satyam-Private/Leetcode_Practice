class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq; 

        for(int i : nums){
            freq[i]++; 
        }

        vector<pair<int,int>> mapping; 

        for(auto it : freq){ 
            mapping.push_back({it.second , it.first}); 
        }

        sort(mapping.begin() , mapping.end() , [](const pair<int,int> &a , const pair<int,int> &b){
            return a.first > b.first; 
        }); 

        int range  = 1; 

        vector<int> ans; 

       for(int i = 0; i < mapping.size(); i++){
            if(range <= k){
                ans.push_back(mapping[i].second); 
            }
            range++; 
       }

       return ans; 
    }
};