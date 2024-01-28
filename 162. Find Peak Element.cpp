class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(nums.begin(), nums.end());
        sort(v.begin(), v.end());
         auto it = std::find(nums.begin(), nums.end(), v[v.size()-1]);
      if (it != nums.end()) {
            return std::distance(nums.begin(), it);
        } else {
            // Handle case when the element is not found
            return -1; // or any other suitable value
        }
        
    }
};
