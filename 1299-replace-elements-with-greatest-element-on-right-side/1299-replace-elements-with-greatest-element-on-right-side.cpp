class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int size = arr.size(); 

        if(size == 1) return {-1}; 
        int greatestEle = arr[size-1]; 

        vector<int> ans(size);

        ans[size-1] = -1; 

        for(int i = size - 2; i >= 0; i-- ){
            ans[i] = greatestEle; 

            if(arr[i] > greatestEle){
                greatestEle = arr[i]; 
            }

        }
        return ans; 
    }
};