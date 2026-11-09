class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> freq; 

        for(int i : nums){
            freq[i]++; 
        }
        int operations = 0; 
        for(auto it : freq){
            if(it.second == 1){
                return -1; 
            }

            else if(it.second % 3 == 0){
                operations += it.second / 3; 
            }
            else if(it.second % 3 == 1){
               operations += (it.second / 3) - 1 + 2; 
            }
            else if(it.second % 3 == 2){
                operations += ((it.second - 2) / 3) + 1; 
            }
            // cout<<it.first<<" "<<it.second<<" "<<operations<<endl;
             
        }

        return operations;

    }
};