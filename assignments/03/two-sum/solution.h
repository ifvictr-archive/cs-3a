#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> indices;

        // Loop through all the numbers and compare them with each other.
        for (size_t i = 0; i < nums.size(); i++) {
            int num1 = nums.at(i);
            int num2 = target - num1;  // Number to look for
            for (size_t j = 0; j < nums.size(); j++) {
                // Number can't be added to itself.
                if (i == j) {
                    continue;
                }

                // If the second number fills in the difference, return it.
                if (nums.at(j) == num2) {
                    indices.push_back(i);
                    indices.push_back(j);
                    return indices;
                }
            }
        }

        return indices;
    }
};
