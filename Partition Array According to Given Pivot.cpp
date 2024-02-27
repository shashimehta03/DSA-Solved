class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int i=0;
        vector<int> small;
        vector<int> big;
        vector<int> equal;
        while(i<nums.size()){
            if(nums[i]<pivot){
                small.push_back(nums[i]);
           }
           else if(nums[i]==pivot){
               equal.push_back(nums[i]);
           }
           else{
               big.push_back(nums[i]);
           }
           i++;
        }
        vector<int> ans(small.begin(), small.end());
        ans.insert(ans.end(), equal.begin(), equal.end());
        ans.insert(ans.end(), big.begin(), big.end());
        return ans;
    }
};
