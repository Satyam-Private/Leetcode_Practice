class Solution {
public:
    int calRounds(int freq){
        
        if(freq % 3 == 0){
            return freq/3;
        }

        else if(freq % 3 == 1){
            return ((freq-4)/3) + 2; 
        }

        else if(freq % 3 == 2){
            return ((freq-2) / 3) + 1; 
        }

        return -1;
    }
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> freq; 

        for(int i : tasks){
            freq[i]++; 
        }
        int ans = 0; 
        for(auto it : freq){
            if(it.second == 1) return -1;
            ans = ans + calRounds(it.second); 
        }

        return ans;
    }
};