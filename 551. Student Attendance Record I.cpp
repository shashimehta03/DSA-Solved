class Solution {
public:
    bool checkRecord(string s) {
        int n=s.length();
        int a=0;
        int l=0;
        int i=0;
        while(i<n && a<2 && l<3){
            if(s[i]=='A'){
            a++;
            l=0; //consecutive days.
            }
            else if(s[i]=='L')
            l++;
            else if(s[i]=='P')
            l=0;  // consecutive days.
            i++;   
        }
        if(a>=2 || l>=3){
            return false;
        }
        return true;
        
    }
};
