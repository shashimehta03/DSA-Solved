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
//using binary search
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int n=nums.size();
        if (n == 1) return 0;
        if (nums[0] > nums[1]) return 0;
        if (nums[n - 1] > nums[n - 2]) return n - 1;
        int low=0;
        int high=n-1;

        while(low<high){
            int mid=(low+high)/2;            
            if(nums[mid]<nums[mid+1]) 
            low=mid+1;
            else
            high=mid;
            
        }
        return high;
    }
};
