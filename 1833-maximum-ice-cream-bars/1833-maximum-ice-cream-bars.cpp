class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int count = 0; 

        sort(costs.begin() , costs.end()); 
        long long myCost = 0; 
        for(int i : costs){
            myCost += i;
            if(myCost <= coins){ 
                count++; 
            }
        }
        return count;
    }
};