class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {

        while(stones.size() >= 2) {

            sort(stones.begin(), stones.end());

            int n = stones.size();

            int first = stones[n - 2];
            int second = stones[n - 1];

            stones.pop_back();
            stones.pop_back();

            if(first != second) {
                stones.push_back(second - first);
            }
        }

        if(stones.empty()) return 0;

        return stones[0];
    }
};