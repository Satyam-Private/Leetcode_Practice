class Solution {
public:
    int maximumGain(string s, int x, int y) {
        int points  = 0; 

        bool casexy = false;
        if(x >= y){
            casexy = true; // ab case
        }


        stack<char> st; 

        if(casexy){
            
            for(int i = 0; i < s.size(); i++){
                if(st.size() == 0) {
                    st.push(s[i]);
                }
                 
                else if(st.top() == 'a' && s[i] == 'b'){
                    points += x;
                    st.pop();  
                }
                else{
                    st.push(s[i]);
                }
            }

        }

        else{
           
            for(int i = 0; i < s.size(); i++){
                if(st.size() == 0) {
                    st.push(s[i]); 
                }
                
                else if(st.top() == 'b' && s[i] == 'a'){
                    points += y; 
                    st.pop(); 
                }
                else{
                    st.push(s[i]);
                }
            }
        }

        string remStr = ""; 

        while(!st.empty()){
            remStr += st.top(); 
            st.pop();
        }

        reverse(remStr.begin() , remStr.end()); 

        for(char ch : remStr){
            cout<<ch<<" "; 
        }


        if(casexy){ 
            for(int i = 0; i < remStr.size(); i++){
                if(st.size() == 0){
                     st.push(remStr[i]); 
                }
                
                else if(st.top() == 'b' && remStr[i] == 'a'){
                    points += y; 
                    st.pop();
                }
                else{
                    st.push(remStr[i]);
                }
            }
        }
        else{
            for(int i = 0; i < remStr.size(); i++){
                if(st.size() == 0) {
                    st.push(remStr[i]); 

                }
              
                else if(st.top() == 'a' && remStr[i] == 'b'){
                    points += x; 
                    st.pop(); 
                }
                else{
                    st.push(remStr[i]);
                }
            }
        }
        return points;
    }
};