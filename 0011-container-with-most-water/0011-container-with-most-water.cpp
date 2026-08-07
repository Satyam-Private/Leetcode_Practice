class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int size = height.size(); 

        int start = 0, end = size-1;
        int maxWater = INT_MIN; 
        while(start <= end){
            int water = min(height[start] , height[end])*(end-start);
            maxWater = max(maxWater , water);
            if(height[start] < height[end]){
                start++;
            }
            else{ 
                end--; 
            }
        }
        return maxWater; 
    }
};