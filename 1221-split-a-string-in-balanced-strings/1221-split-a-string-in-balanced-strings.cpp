class Solution {
public:
    int balancedStringSplit(string s) {
        stack<char> strings; 

        int ans = 0; 
        strings.push(s[0]); 
        for(int i = 1; i < s.size(); i++){
            if(strings.empty()){
                ans++; 
                strings.push(s[i]);
            }
            else if(strings.top() != s[i]){
                strings.pop(); 
            }

            else if(strings.top() == s[i]){
                strings.push(s[i]); 
            }
        }

        if(strings.empty()) ans++; 

        return ans;
    }
};