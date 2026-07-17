class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> prefixGcd(nums.size());
        vector<int> mxi(nums.size()); 
        mxi[0] = nums[0]; 
        for(int i = 1; i < nums.size(); i++ ){
            mxi[i] = max(mxi[i-1] , nums[i]); 
        }

        for(int i = 0; i < mxi.size(); i++){ 
            prefixGcd[i] = gcd(mxi[i] , nums[i]); 
        }

        sort(prefixGcd.begin() , prefixGcd.end()); 


        int i = 0, j = prefixGcd.size()-1; 
        vector<int> sumAns; 
        while(i < j){ 
            sumAns.push_back(gcd(prefixGcd[i] , prefixGcd[j])); 
            i++; 
            j--; 
        }

        long long ans = 0; 

        for(int i = 0; i < sumAns.size(); i++){ 
            ans += sumAns[i]; 
        }

        return ans;
            
    }
};