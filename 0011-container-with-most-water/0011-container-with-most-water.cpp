class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0, end = height.size() - 1; 
        cout<<start<<end;
        int maxCap = INT_MIN;
        while(start <= end){
            int holdingCap = min(height[start] , height[end]) * (end - start);

            if(height[start] <= height[end]){
                start++; 
            }
            else{ 
                end--; 
            }

            maxCap = max(maxCap , holdingCap); 
        }

        return maxCap; 
    }
};