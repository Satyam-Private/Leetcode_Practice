class Solution {
public:
    int minMoves(vector<int>& nums) {
        int sum = 0; 
        int maxEle = INT_MIN; 

        for(int i : nums){
            maxEle = max(i , maxEle); 
        }
     
        int count = 0;

        for(int i : nums){
            count += abs(maxEle - i); 
        }


        return count;
    }
};