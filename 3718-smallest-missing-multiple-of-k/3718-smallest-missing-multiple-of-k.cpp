class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        

        int count = 1; 

        unordered_set<int> map1(nums.begin() , nums.end()); 

        while(true){
            if(map1.count(k*count) == 0){
                return k*count; 
            }
            else{ 
                count++; 
            }
        }

        return -1;
    }
};