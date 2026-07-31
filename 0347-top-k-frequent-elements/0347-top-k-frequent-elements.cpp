class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq; 

        for(int i : nums){
            freq[i]++; 
        }


        vector<vector<int>> bucket(nums.size()+1); 


        for(auto it : freq){ 
            bucket[it.second].push_back(it.first); 
        }

        vector<int> ans; 
        int counter = 1; 
        for(int i = bucket.size() - 1; i >= 0; i--){
            if(counter <= k){
                ans.insert(ans.end(), bucket[i].begin(), bucket[i].end());
            }
            counter += bucket[i].size();
        }
        return ans; 
    }
};