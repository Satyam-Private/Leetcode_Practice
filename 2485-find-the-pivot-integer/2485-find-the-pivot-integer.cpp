class Solution {
public:
    int pivotInteger(int n) {
        vector<int> rightSum(n);
        rightSum[n-1] = n; 
        int temp = n-1; 
        for(int i = n-2; i >= 0; i--){
            rightSum[i] = rightSum[i+1] + temp;
            temp--; 
        }


        vector<int> leftSum(n); 
        leftSum[0] = 1;
        int temp2 = 2;
        for(int i = 1; i < n; i++){
            leftSum[i] = leftSum[i-1] + temp2; 
            temp2++; 
        }

        for(int i = 0; i < n; i++){
            if(leftSum[i] == rightSum[i]){
                return i+1;
            }
        }
        return -1; 
    }
};