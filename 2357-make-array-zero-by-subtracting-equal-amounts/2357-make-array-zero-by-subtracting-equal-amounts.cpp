class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int> distinctEle; 

        for(int i : nums){
            if(i != 0){
                distinctEle.insert(i); 
            }
        }

        return distinctEle.size(); 
    }
};