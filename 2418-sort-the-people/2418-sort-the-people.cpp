class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        unordered_map<int,string> mapping; 

        for(int i = 0; i < names.size(); i++){
            mapping[heights[i]] = names[i]; 
        }

        sort(heights.begin() , heights.end() , [](int &a , int &b){
            return a > b; 
        }); 


        vector<string> ans; 

        for(int i : heights){
            ans.push_back(mapping[i]); 
        }

        return ans; 
    }
};