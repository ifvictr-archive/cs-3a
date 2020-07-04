#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        // Remove duplicate numbers
        nums = unique(nums);

        // Sort numbers in descending order
        sort(nums.begin(), nums.end());
        reverse(nums.begin(), nums.end());

        // Return the third max element. If that's not available, return the max
        // itself.
        return nums.size() >= 3 ? nums.at(2) : nums.front();
    }

    // Only keep unique elements of an int vector
    vector<int> unique(const vector<int> nums) {
        vector<int> uniqueNums;
        for (int num : nums) {
            // If the number can't be found, add it
            if (find(uniqueNums.begin(), uniqueNums.end(), num) ==
                uniqueNums.end()) {
                uniqueNums.push_back(num);
            }
        }

        return uniqueNums;
    }
};
