class Solution {
public:
    void solve(vector<char> &s , int first , int last){
        if(last < first) return; 

        char temp = s[first]; 
        s[first ] = s[last]; 
        s[last] = temp; 

        solve(s , first + 1 , last - 1); 
    }
    void reverseString(vector<char>& s) {
        solve(s , 0 , s.size() - 1); 
    }
};