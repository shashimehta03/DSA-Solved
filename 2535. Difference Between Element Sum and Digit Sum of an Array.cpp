class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int i=0;
        int elesum=0;
        string intstr;
        while(i<nums.size()){
            elesum+=nums[i];
            intstr += std::to_string(nums[i]);
            i++;
        }
        int digitsum=0;
        for (char c : intstr) {
            digitsum += c - '0';
        }
        return elesum-digitsum;
    }
};
