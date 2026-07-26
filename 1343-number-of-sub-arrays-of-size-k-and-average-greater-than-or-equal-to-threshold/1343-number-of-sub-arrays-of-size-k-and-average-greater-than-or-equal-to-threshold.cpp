class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
       int count = 0; 

       int newThreshold = k*threshold; 

       int start = 0, end = 0; 

        int sum = 0; 
       while(end < k){ 
            sum += arr[end]; 
            end++; 
       } 

       if(sum >= newThreshold){ 
         count++; 
       }
        // cout<<sum<<count; 
       while(end < arr.size()){ 
            sum += arr[end];
            sum -= arr[start]; 
            if(sum >= newThreshold){ 
                count++; 
            }
            end++; 


            start++; 

       }
       return count; 
    }
};