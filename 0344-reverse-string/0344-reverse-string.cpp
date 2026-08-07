class Solution {
public:
    void reverseString(vector<char>& s) {
    int size = s.size(); 

    if(size == 1) return; 


    int start = 0, end = size - 1; 

    while(start <= end){
        char temp = s[start]; 
        s[start] = s[end]; 

        s[end] = temp; 

        start++; 
        end--; 
    }
    }
};