class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        // sort(bills.begin() , bills.end());
        unordered_map<int,int> map1; 
        for(int i = 0; i < bills.size(); i++){ 
            if(bills[i] == 5){ 
                map1[bills[i]]++; 
            }
            else if(bills[i] == 10){
                if(map1[bills[i] - 5]){ 
                    map1[bills[i]-5]--; 
                    map1[bills[i]]++; 
                } 
                 
                else{ 
                    return false;
                }

            }
            else{ 
                if(map1[5] && map1[10]){ 
                    map1[5]--; 
                    map1[10]--; 
                }
                else if(map1[5] >= 3){ 
                    map1[5] -= 3;}
                else{ 
                    return false;
                }
            }
        }
        return true;
    }
};