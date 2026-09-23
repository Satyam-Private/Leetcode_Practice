class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<int,int>> st; 


        for(int i = 0; i < s.size(); i++){ 
            if(st.empty() || st.top().first != s[i]){ 
                st.push({s[i] , 1}); 
            }

            else if(st.top().first == s[i] && st.top().second == k-1){
                st.pop(); 
            }

            else if(st.top().first == s[i] && st.top().second < k){
                st.top().second++; 
            }
        }

        string ans = ""; 

        while(!st.empty()){

            string temp = ""; 
            int last = st.top().second;
            for(int i = 1; i <= last ;i++){
                temp += st.top().first;
            }
            ans += temp; 
            st.pop(); 
        }

        reverse(ans.begin() , ans.end()); 

        return ans; 
    }
};