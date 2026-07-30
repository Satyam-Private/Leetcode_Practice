class Solution {
public:
static bool cmp(string a, string b) {
        return a + b > b + a;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> numsStr; 

        for(int i = 0; i < nums.size(); i++){ 
            numsStr.push_back(to_string(nums[i])); 
        }

        sort(numsStr.begin() , numsStr.end() , cmp ); 


        string ans = ""; 

        for(int i = 0; i < numsStr.size(); i++){ 
            ans += numsStr[i]; 
        }

        if(ans[0] == '0') return "0"; 
        return ans; 
    }
};