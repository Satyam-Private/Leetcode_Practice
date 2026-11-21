class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans; 

        int maxEle = INT_MIN; 

        for(int i = 0; i < candies.size(); i++){
            maxEle = max(maxEle , candies[i]); 

        }

        for(int i = 0; i  < candies.size(); i++){
            bool temp;
            if(candies[i] + extraCandies >= maxEle){
                temp = true; 
            }
            else{
                temp = false;
            }

            ans.push_back(temp); 
        }
        return ans;
    }
};