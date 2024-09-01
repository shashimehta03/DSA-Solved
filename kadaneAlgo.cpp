#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &v){
    int sum=0;
    for(int i=0;i<v.size();i++){
        sum+=v[i];
        if(sum<0){
            sum=0;
        }
    }
    // sum=accumulate(v.begin(),v.end(),0);
    return sum;
}
int main(){
    vector<int> v={10,102,3,6,-6,-112,9};
    int ans=solve(v);
    cout<<ans<<endl;
}
