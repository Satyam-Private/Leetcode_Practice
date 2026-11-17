class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string , vector<string>> map; 

        for(string s : strs){
            string temp = s; 
            sort(temp.begin() , temp.end()); 

            map[temp].push_back(s); 
        }


        vector<vector<string>> finalAns; 

        for(auto it : map){
            finalAns.push_back(it.second); 
        }

        return finalAns; 
    }
};