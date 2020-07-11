class Solution {
public:
    int binaryGap(int n) {
        int longestGap = 0;
        int lastStartIndex = -1;
        int index = 0;

        // Loop through the number's bits, starting from the least significant
        // one. End when the number is equal to 0.
        while (n != 0) {
            // Check if the current rightmost bit is on.
            if (n & 1) {
                // There needs to have been at least another bit on to calculate
                // the gap.
                if (lastStartIndex != -1) {
                    int gap = index - lastStartIndex;
                    if (gap > longestGap) {
                        longestGap = gap;
                    }
                }

                lastStartIndex = index;
            }

            n >>= 1;  // Move one bit to the left
            index++;
        }

        return longestGap;
    }
};
