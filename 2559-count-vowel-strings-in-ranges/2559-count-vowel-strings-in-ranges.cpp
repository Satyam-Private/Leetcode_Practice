class Solution {
public:
    bool isTrue(string s){
        int n = s.size(); 
        if((s[0] == 'a' || s[0] == 'e' || s[0] == 'i' || s[0] == 'o' || s[0] == 'u' )&& (s[n-1] == 'a' || s[n-1] == 'e' || s[n-1] == 'i' || s[n-1] == 'o' || s[n-1] == 'u')){
            return true;
        }

        return false;
    }
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        unordered_map<int, bool> mapping; 


        for(int i = 0; i < words.size(); i++){
            if(isTrue(words[i])){
                mapping[i] = true;
            }
            else{
                mapping[i] = false;
            }
        }
        vector<int> sum(words.size() , 0); 
        sum[0] = mapping[0]; 
        for(int i = 1; i < sum.size(); i++){
             sum[i] = sum[i-1]+mapping[i]; 
        }
        vector<int> ans;

        for(int i = 0; i < sum.size(); i++){
            cout<<i << " "<<sum[i]<<endl; 
        }
        for(int i = 0; i < queries.size(); i++){
            if(queries[i][0] == 0){
                ans.push_back(sum[queries[i][1]]);
            }

            else if(queries[i][0] == queries[i][1]){
                ans.push_back(sum[queries[i][1]] - sum[queries[i][0]-1]); 
            }
            else{
                int temp = sum[queries[i][1]] - sum[queries[i][0]-1];

                ans.push_back(temp); 
            }
        }

        return ans;
    }
};