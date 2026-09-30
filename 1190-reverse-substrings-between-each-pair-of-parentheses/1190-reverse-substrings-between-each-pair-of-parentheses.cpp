class Solution {
public:
    string reverseParentheses(string s) {
            stack<char> st; 


            int start = 0; 
            
            while(start < s.size()){
                if(s[start] != ')'){
                    st.push(s[start]); 
                }

                else{
                    string ans = "";
                    while(st.top() != '('){
                     ans += st.top();
                     st.pop(); 
                    }
                    st.pop();

                    int it = 0; 

                    while(it < ans.size()){
                        st.push(ans[it]); 
                        it++;
                    }

                }

                start++; 
            }

            string finalAns = ""; 
            while(!st.empty()){
                finalAns += st.top(); 
                st.pop();
            }
            reverse(finalAns.begin(),finalAns.end());
            return finalAns;
    }
};