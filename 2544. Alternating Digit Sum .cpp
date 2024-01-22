class Solution {
public:
    int alternateDigitSum(int n) {
        int sum=0;
        vector<int>v;
        while(n!=NULL){
            //int lastnum=;
            v.push_back(n%10); 
            n=n/10; 
        }
        reverse(v.begin(),v.end());
        
        for(int i=0;i<v.size();i++){
           if(i%2==0)
           sum+=v[i];
           else
           sum-=v[i];
        }
        return sum;
    }
};
