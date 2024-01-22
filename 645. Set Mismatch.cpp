#include <vector>

class Solution {
public:
    std::vector<int> findErrorNums(std::vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    ans.push_back(nums[i]);  // Duplicate number
                    break;
                }
            }
        }
        for (int i = 1; i <= n; i++) {
            if (find(nums.begin(), nums.end(), i) == nums.end()) {
                ans.push_back(i);  
                break;
            }
        }
        return ans;
    }
};
