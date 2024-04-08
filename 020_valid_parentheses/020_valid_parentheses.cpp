// By @PauloBacelar
// Problem: leetcode.com/problems/valid-parentheses/

#include <string>
#include <vector>

using namespace std;

class Solution {
   public:
    bool isValid(string s) {
        std::vector<char> stack;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stack.push_back(s[i]);
                continue;
            }

            if (stack.size() == 0) {
                return false;
            }

            bool isValidClosing = ((stack[stack.size() - 1] == '(' && s[i] == ')') ||
                                   (stack[stack.size() - 1] == '[' && s[i] == ']') ||
                                   (stack[stack.size() - 1] == '{' && s[i] == '}'));

            if (!isValidClosing) {
                return false;
            }

            stack.pop_back();
        }

        return stack.size() == 0;
    }
};

// Testing
int main() {
    return 0;
}
