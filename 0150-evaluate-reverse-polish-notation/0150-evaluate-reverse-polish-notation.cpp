class Solution {
public:

    int cal(int first , int second , string ch){
        if(ch == "*") return first*second; 
        else if(ch == "/") return first / second; 
        else if(ch == "+") return first + second; 
        return first - second; 
    }
    int evalRPN(vector<string>& tokens) {

        stack<int> st; 

        for(int i = 0; i < tokens.size(); i++){
            if(tokens[i] == "*" || tokens[i] == "/" || tokens[i] == "+" || tokens[i] == "-"){
                int second = st.top();
                st.pop(); 
                int first = st.top(); 
                st.pop(); 

                int ans = cal(first ,second , tokens[i]); 
                st.push(ans); 
            }
            else{
                int temp = stoi(tokens[i]); 
                st.push(temp); 
            }
        }
        return st.top();
    }
};