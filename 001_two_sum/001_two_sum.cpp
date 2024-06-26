// By @PauloBacelar
// Problem: leetcode.com/problems/two-sum/

#include <vector>

using namespace std;

class Solution {
   public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums[i] + nums[j] == target) {
                    return {j, i};
                }
            }
        }

        return nums;
    }
};

// Testing
int main() {
    return 0;
}
