class Solution {
public:
    int maxDepth(string s) {
        stack<char> st; 
        size_t maxDepth = 0; 
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '('){
                st.push(s[i]);
            }
            else if(s[i] == ')'){
                maxDepth = max(maxDepth , st.size());
                st.pop();
            }
        }

        return maxDepth; 
    }
};