class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin() , intervals.end() , [](vector<int> &a , vector<int> &b){
            return a[0] < b[0]; 
        });
        vector<vector<int>> finalAns; 

        int start = intervals[0][0], end = intervals[0][1];

        for(int i = 1; i < intervals.size(); i++){
            if(intervals[i][0] > end){
                finalAns.push_back({start , end}); 
                start = intervals[i][0]; 
                end = intervals[i][1]; 
            }

            else if(intervals[i][0] <= end && intervals[i][1] > end){

                end = intervals[i][1]; 

            }
        }


        finalAns.push_back({start , end}); 

        return finalAns;
    }
};