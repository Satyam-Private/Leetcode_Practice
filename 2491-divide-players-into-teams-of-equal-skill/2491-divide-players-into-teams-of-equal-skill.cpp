class Solution {
public:
    long long dividePlayers(vector<int>& skill) {

        if(skill.size() == 2){
            return 1LL*skill[0]*skill[1]; 
        }
        sort(skill.begin() , skill.end()); 


        int start = 0 , end = skill.size() - 1; 
        int sum = skill[start] + skill[end];
        long long score = 0;  
        while(start < end){
            int tempSum = skill[start] + skill[end]; 

            if(tempSum != sum) return -1; 

            score += skill[start]*skill[end]; 

            start++; 
            end--; 
        }

        return score; 


    }
};