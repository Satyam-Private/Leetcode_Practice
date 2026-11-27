class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lI = 0 , currInd = 0; 

        int score = 0; 

        while(currInd < k){
            score += cardPoints[currInd]; 
            currInd++; 
        }
        currInd--; 
        int maxScore = score; 
        int newLi = cardPoints.size() - 1; 

        while(newLi >= cardPoints.size() - k && currInd >= 0){
            score -= cardPoints[currInd];
            currInd--; 
            score += cardPoints[newLi]; 
            newLi--; 

            maxScore = max(maxScore  , score);
        }

        return maxScore;
    }
};