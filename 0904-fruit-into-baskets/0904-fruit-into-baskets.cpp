class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int firstBasket = -1;
        int secondBasket = -1;

        int firstLast = -1;
        int secondLast = -1;

        int start = 0;
        int maxTrees = 0;

        for (int end = 0; end < fruits.size(); end++) {

            // First basket
            if (firstBasket == -1 || fruits[end] == firstBasket) {
                firstBasket = fruits[end];
                firstLast = end;
            }

            // Second basket
            else if (secondBasket == -1 || fruits[end] == secondBasket) {
                secondBasket = fruits[end];
                secondLast = end;
            }

            // Third type encountered
            else {
                if (firstLast < secondLast) {
                    // firstBasket is the one to remove
                    start = firstLast + 1;

                    firstBasket = fruits[end];
                    firstLast = end;
                }
                else {
                    // secondBasket is the one to remove
                    start = secondLast + 1;

                    secondBasket = fruits[end];
                    secondLast = end;
                }
            }

            maxTrees = max(maxTrees, end - start + 1);
        }

        return maxTrees;
    }
};