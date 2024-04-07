// By @PauloBacelar
// Problem: leetcode.com/problems/roman-to-integer

#include <cstring>
#include <map>
#include <string>

using namespace std;

class Solution {
   public:
    int romanToInt(string s) {
        std::map<char, int> romanToNumber;

        romanToNumber['I'] = 1;
        romanToNumber['V'] = 5;
        romanToNumber['X'] = 10;
        romanToNumber['L'] = 50;
        romanToNumber['C'] = 100;
        romanToNumber['D'] = 500;
        romanToNumber['M'] = 1000;

        char chars[s.length() + 1];
        strcpy(chars, s.c_str());

        int output = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i >= s.length()) {
                break;
            }

            if (romanToNumber[chars[i + 1]] > romanToNumber[chars[i]]) {
                output += romanToNumber[s[i + 1]];
                output -= romanToNumber[s[i]];
                i++;
            } else {
                output += romanToNumber[chars[i]];
            }
        }

        return output;
    }
};

// Testing
int main() {
    return 0;
}
