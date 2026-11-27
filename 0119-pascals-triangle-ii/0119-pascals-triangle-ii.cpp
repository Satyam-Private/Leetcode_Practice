class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> dp; 

        for(int i = 1; i <= rowIndex+1; i++){
            vector<int>temp(i , 1);
            dp.push_back(temp);
        }

        // for(int i = 0; i <= rowIndex; i++){
        //     int n = i+1; 

        //     for(int j = 0; j < n; j++){
        //         cout<<dp[i][j]; 
        //     }
        //     cout<<endl;
        // }


        for(int i = 2; i <= rowIndex; i++){
            for(int j = 1; j < i; j++){
                dp[i][j] = dp[i-1][j] + dp[i-1][j-1]; 
            }
        }
        return dp[rowIndex];
    }
};