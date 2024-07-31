#include<bits/stdc++.h>
using namespace std;
int check(int a , int b){
    int asum=0;
    int bsum=0;
    for(int i=1;i<=b;i++){
        if(i%a==0){
            asum+=i;
        }
        else{
            bsum+=i;
        }
        
        
    }
    return asum-bsum;
}
int main(){
    int n=4;
    int m=20;
    int ans=check(n,m);
    cout<<abs(ans);
}
