Approch 1 - 3loop
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n=nums.size();
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                long long newt=(long long) target- (long long)nums[i]-(long long)nums[j];
                int low=j+1,high=n-1;
                while(low<high){
                    if(nums[low]+nums[high]<newt)
                    low++;
                    else if(nums[low]+nums[high]>newt)
                    high--;
                    else{
                        s.insert({nums[i],nums[j],nums[low],nums[high]});
                        low++;
                        high--;
                    }
                }
            }
        }
        for(auto it:s){
            ans.push_back(it);
        }
        return ans;

    }
};

Approch 2: 4 loop
  class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n=nums.size();
        set<vector<int>> s;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++){
            for(int j=i+1;j<n-2;j++){
                for(int k=j+1;k<n-1;k++){
                    for(int l=k+1;l<n;l++){
                        if((long long)nums[i]+(long long)nums[j]+(long long)nums[k]+(long long)nums[l]==target){
                            s.insert({nums[i],nums[j],nums[k],nums[l]});
                        }
                    }
                }
            }
        }
        for(auto it:s){
            ans.push_back(it);
        }
        return ans;

    }
};
