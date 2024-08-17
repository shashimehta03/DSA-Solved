//kadane alogorithms
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int product = 1;
        int maxi = INT_MIN;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            product *= nums[i];
            if (product > maxi) {
                maxi = product;
            }
            if (product == 0) {
                product = 1;
            }
        }
        return maxi;
    }
};
//obvervation approch
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long prefix=1;
        long long suffix=1;
        long long  maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(prefix==0)  prefix=1;
            if(suffix==0) suffix=1;
            prefix=prefix * nums[i];
            suffix=suffix*nums[nums.size()-i-1];
            maxi=max(maxi,max(prefix,suffix));
            if (prefix > LLONG_MAX / 10 || prefix < LLONG_MIN / 10) prefix = 1;
            if (suffix > LLONG_MAX / 10 || suffix < LLONG_MIN / 10) suffix = 1;
        }
        return (int)maxi;
    }
};
