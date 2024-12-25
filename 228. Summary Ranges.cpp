class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string>ans;
        int n=nums.size();
        if (n == 0) return ans;
        if(n==1) {
            ans.push_back(to_string(nums[0]));
            return ans;
        }
        for(int i=0;i<n;){
            int start=nums[i];
            while(i+1<n && nums[i]+1==nums[i+1] ){
                i++;
            }
            int end=nums[i];
            if(start==end){
                ans.push_back(to_string(start));
            }
            else{
                string s=to_string(start)+"->"+to_string(end);
                ans.push_back(s);
            }
            i++;
        }
        return ans;
        
    }
};
