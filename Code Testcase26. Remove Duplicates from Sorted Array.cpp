class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        nums.assign(s.begin(),s.end());// assigning the value of set to the array
        int x=s.size();
        return x;
    }
};
