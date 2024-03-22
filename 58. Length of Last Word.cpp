class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length();
        int sum=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==' '){
               if(sum == 0)
                    continue;
                else
                    return sum;
            }
            else{
                sum++;
            }
        }
        return sum;
    }
};
