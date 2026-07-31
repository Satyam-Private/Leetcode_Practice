class Solution {
public:
    int minimumPushes(string word) {
        int freq[26] = {0};

        for (char ch : word) {
            freq[ch - 'a']++;
        }

        vector<pair<int, char>> v;

        for (int i = 0; i < 26; i++) {
            if (freq[i] > 0)
                v.push_back({freq[i], 'a' + i});
        }

        sort(v.begin(), v.end(), greater<pair<int, char>>());
        int ans = 0;
        int key = 1; 
        for (auto& p : v) {
            if(key <= 8){
                ans += p.first; 
            }
            else if(key >= 9 && key <= 16){
                ans += p.first*2;
            }
            else if(key > 16 && key <= 24){ 
                ans += p.first*3; 
            }
            else{
                ans += p.first*4;
            }
            key++; 
        }
        return ans; 
    }
};