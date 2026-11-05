class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0; 
        int n = prices.size(); 
        int sp = prices[n-1]; 


        for(int i = n-1; i >= 0; i--){
            if(prices[i] > sp){
                sp = prices[i]; 
            }

            profit = max(profit , sp - prices[i]); 

        }

        return profit; 
    }
};