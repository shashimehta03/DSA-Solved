class Solution {
public:
    int getLucky(string s, int k) {
        string numStr="";
        for(char c:s){
            int n=c-'a'+1;
            numStr+=to_string(n);
        }
        int sum=0;
        while(k--){
            sum=0;
            for(char c:numStr){
                sum+=c-'0';
            }
            numStr=to_string(sum);
        }
        return sum;
        
    }
};
