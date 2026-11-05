class Solution {
public:
    void revString(vector<char> &s, int ind, vector<char> &temp){
        if(ind == s.size()) return; 

        revString(s , ind+1, temp);

        temp.push_back(s[ind]);  
    }
    void reverseString(vector<char>& s) {
        vector<char> temp;  

        revString(s , 0 , temp); 

        for(int i = 0; i < s.size(); i++){
            s[i] = temp[i]; 
        }
    }
};