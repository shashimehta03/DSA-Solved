// for 171 testcase out of 176
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int target=1;
        bool yess=true;
        while((find(nums.begin(), nums.end(), target) != nums.end())== true){
        target++;
       } 
        return target;
    }
};
// optamized for all the testcase
class Solution {
public:
    int firstMissingPositive(std::vector<int>& nums) {
        std::unordered_set<int> numSet(nums.begin(), nums.end());

        int target = 1;
        while (numSet.count(target) != 0) {
            target++;
        }

        return target;
    }
};
