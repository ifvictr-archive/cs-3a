#include <cmath>
#include <string>

using namespace std;

class Solution {
public:
    string convertToBase7(int num) {
        string representation = "";
        bool isNegative = num < 0;

        // Keep on getting the remainder, then dividing the number by 7 until
        // it's zero.
        do {
            int remainder = abs(num % 7);
            representation = to_string(remainder) + representation;

            num /= 7;
        } while (num != 0);

        // Add negative sign to the representation if the number is negative.
        if (isNegative) {
            representation = "-" + representation;
        }

        return representation;
    }
};
