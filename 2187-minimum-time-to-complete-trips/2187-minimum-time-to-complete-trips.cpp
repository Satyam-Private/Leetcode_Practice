class Solution {
public:
    long long calTrips(long long mid , vector<int> &time){
        long long ans = 0; 

        for(int i : time){
            ans += mid / i; 
        }

        return ans; 
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        int minTime = time[0]; 

        for(int i = 1; i < time.size(); i++){
            minTime = min(minTime , time[i]);
        }

        long long lowerB = 1, upperB = 1LL*minTime*totalTrips; 
        long long ans; 
        while(lowerB <= upperB){
            long long mid = lowerB + (upperB - lowerB) / 2; 


            if(calTrips(mid , time) >= totalTrips){
                ans = mid;
                upperB = mid - 1;
            }
            else{
                lowerB = mid + 1; 
            }
        }

        return ans; 
    }
};