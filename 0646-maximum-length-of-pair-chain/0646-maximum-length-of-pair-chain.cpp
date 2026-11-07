class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin() , pairs.end() , [](vector<int> &a , vector<int> &b){
            return a[1] < b[1]; 
        }); 


        int maxLen = 0; 

        for(int i = 0; i < pairs.size(); i++){
            int end = pairs[i][1]; 
            int count = 1; 
            for(int j = i+1; j < pairs.size(); j++){
                if(pairs[j][0] > end){
                    count++; 
                    end = pairs[j][1]; 
                }
            }

            maxLen = max(maxLen , count); 
        }

        return maxLen; 
    }
};