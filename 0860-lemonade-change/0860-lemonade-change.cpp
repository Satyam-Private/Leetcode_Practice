class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        // sort(bills.begin() , bills.end()); 

        int five_d = 0, ten_d = 0, twenty_d = 0; 

        for(int i = 0; i < bills.size(); i++){
            if(bills[i] == 5){
                five_d++; 
            }

            else if(bills[i] == 10){
                if(five_d >= 1){
                    five_d--; 
                    ten_d++; 
                }
                else{
                    return false; 
                }
            }
            else{
                if(five_d >= 1 && ten_d >= 1){
                    five_d--; 
                    ten_d--;
                    twenty_d++; 
                }
                else if(ten_d == 0 && five_d >= 3){
                    five_d -= 3; 
                }
                else return false;
            }
        }

        return true; 
    }
};