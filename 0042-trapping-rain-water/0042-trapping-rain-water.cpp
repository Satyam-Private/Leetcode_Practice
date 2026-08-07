class Solution {
public:
    int trap(vector<int>& height) {

        int size = height.size();
        vector<int> lMax(size , 0); 
        vector<int> rMax(size , 0);


        lMax[0] = 0; 

        for(int i = 1;  i < size; i++){
            lMax[i] = max(lMax[i-1] , height[i-1]); 
        }

        rMax[size-1] = 0; 

        for(int i = size - 2; i >= 0; i--){ 
            rMax[i] = max(rMax[i+1] , height[i+1] ); 
        }

        int water = 0; 

        for(int i = 0; i < size; i++){
            int ans = min(lMax[i] , rMax[i]) - height[i];

            if(ans > 0) water += ans;
        }

        return water; 
    }

};