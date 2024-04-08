// By @PauloBacelar
// Problem: leetcode.com/problems/longest-common-prefix

#include <string>
#include <vector>

using namespace std;

class Solution {
   public:
    string longestCommonPrefix(vector<string>& strs) {
        string longestPrefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            string prefix = "";
            string str = strs[i];

            for (int j = 0; j < strs[i].length(); j++) {
                if (longestPrefix[j] != str[j]) {
                    break;
                }

                prefix += longestPrefix[j];
            }

            longestPrefix = prefix;
        }

        return longestPrefix;
    }
};

// Testing
int main() {
    return 0;
}
