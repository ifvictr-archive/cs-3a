#include <cctype>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(string str) {
        str = normalize(str);
        for (size_t i = 0; i < str.length() / 2; i++) {
            // Check if char at current distance from start is same as the char
            // at the distance from end
            if (tolower(str.at(i)) != tolower(str.at(str.length() - 1 - i))) {
                return false;
            }
        }

        return true;
    }

    // Remove all non-alphanumeric characters and convert to lowercase
    string normalize(string str) {
        string newStr = "";
        for (size_t i = 0; i < str.length(); i++) {
            char currentChar = str.at(i);
            if (isalnum(currentChar)) {
                newStr += tolower(currentChar);
            }
        }

        return newStr;
    }
};
