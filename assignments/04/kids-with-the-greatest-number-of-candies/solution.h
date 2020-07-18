#include <vector>

using namespace std;

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // Get the kid with the greatest amount of candies.
        int greatestCandyCount = 0;
        for (int candyCount : candies) {
            if (candyCount > greatestCandyCount) {
                greatestCandyCount = candyCount;
            }
        }

        // Loop through all the kids and see if the extra candies will reach or
        // surpass that amount.
        vector<bool> results;
        for (int candyCount : candies) {
            bool canHaveGreatest =
                candyCount + extraCandies >= greatestCandyCount;
            results.push_back(canHaveGreatest);
        }

        return results;
    }
};
