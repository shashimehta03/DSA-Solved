class Solution {
public:
    bool isGoodArray(vector<int>& nums) {
        int g=0;
        for(int i=0;i<nums.size();i++)
        g=__gcd(g,nums[i]);
        if(g>1)
        return 0;
        else
        return 1;
    }
};
