class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        vector<int> ans; 

        int size = nums.size(); 

        if(size == 1 && k == 0) return nums;

        if(size == 1 && k > 0) return {-1}; 
        for(int i = 0; i < size; i++){ 
            if(i >= k && size - i > k){
                ans.push_back(0);
            }
            else{
                ans.push_back(-1); 
            }
        }

        if(size < 2*k + 1){
            return ans; 
        }

        int start = 0, end = 0; 
        int avg = 0;
        long long sum = 0; 
        while(end < 2*k + 1){
            sum += nums[end];
            end++; 
        }
            cout<<end;

        avg = sum / (2*k+1);

        for(int i = k; i < size - k; i++){ 
            ans[i] = avg; 

            if (end == size) break;

            sum += nums[end]; 
            sum -= nums[start]; 

            end++; 
            start++; 

            avg = sum / (2*k+1);
        }

        return ans;
    }
};