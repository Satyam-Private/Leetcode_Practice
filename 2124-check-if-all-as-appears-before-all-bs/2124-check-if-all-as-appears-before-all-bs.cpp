class Solution {
public:
    bool checkString(string s) {

        int temp = -1; 

        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'b'){
                temp = i; 
                break; 
            }
        }

        if(temp == -1) return true;


        for(int i = temp; i < s.size(); i++){
            if(s[i] == 'a') return false;
        }

        return true;

    }
};