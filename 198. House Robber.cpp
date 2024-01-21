class Solution {
public:
    int rob(vector<int>& nums) {
       int sum=0;
       int n=nums.size();
       if(n==0) return 0;
       int sum2=0;
       for(int ele:nums){
           int temp=sum;
           sum=max(sum2+ele,sum);
           sum2=temp;
       }
        return sum;
    }
};
