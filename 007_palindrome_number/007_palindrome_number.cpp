// By @PauloBacelar
// Problem: leetcode.com/problems/palindrome-number/

#include <iostream>
#include <string>

using namespace std;

class Solution {
   public:
    bool isPalindrome(int x) {
        std::string s = std::to_string(x);

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != s[s.length() - (i + 1)]) {
                std::cout << "False";
                return false;
            }
        }

        std::cout << "True";
        return true;
    }
};

// Testing
int main() {
    Solution s;
    s.isPalindrome(-121);
}
