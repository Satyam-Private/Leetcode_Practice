class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans; 
        if(intervals.size() == 1) return intervals;
        int size = intervals.size(); 
        sort(intervals.begin() , intervals.end() , [](vector<int> a, vector<int> b){
            return a[0] < b[0]; 
        }); 


        int start = 0; 
        int minEle = intervals[start][0]; 
        int maxEle = intervals[start][1]; 

        while(start < size){
            if(intervals[start][0] <= maxEle){
                maxEle = max(maxEle , intervals[start][1]); 
                minEle = min(minEle , intervals[start][0]); 
            }
            else{
                ans.push_back({minEle , maxEle}); 
                minEle = intervals[start][0]; 
                maxEle = intervals[start][1]; 
            }
            start++; 
        }
        ans.push_back({minEle , maxEle}); 
        return ans; 


    }
};