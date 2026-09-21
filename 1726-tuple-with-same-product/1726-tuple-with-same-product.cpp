class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int,int> map1;

        for(int i = 0; i < nums.size(); i++){
            for(int j = i+1;j < nums.size();j++ ){
                map1[nums[i]*nums[j]]++;
            }
        }

        int count = 0; 

        for(auto it : map1){
             int k = it.second;
            count += (k * (k - 1) / 2) * 8;
        }

        return count;
    }
};