class Solution {
public:
    int minimumPushes(string word) {
        int count1 = 0, count2 = 0, count3 = 0, count4 = 0; 

        for(int i = 0; i < word.size(); i++){ 
            if(i < 8) count1++; 
            else if(i < 16 && i >= 8) count2++; 
            else if(i >= 16 && i < 24) count3++; 
            else count4++; 
        }
        cout<<count1<<count2<<count3;
        int ans = count1 + 2*count2 + 3*count3 + 4*count4;

        return ans; 
    }
};