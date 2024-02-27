class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> small;
        vector<int> big;
        for( int i=0;i<nums.size();i++){
            if(nums[i]<0){
                small.push_back(nums[i]);
            }
            else{
                big.push_back(nums[i]);
            }
        }
        vector<int> ans;
        int i=0;
        while(i<big.size()&& i<small.size()){
            ans.push_back(big[i]);
            ans.push_back(small[i]);
            i++;
        }
        return ans;
    }
};
