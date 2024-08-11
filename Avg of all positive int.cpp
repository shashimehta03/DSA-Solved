#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &v){
    int ans=0;
    int dive=1;
    for(int i=0;i<v.size();i++){
        if(v[i]>0){
            ans+=v[i];
            dive++;
        }
        
    }
    return ans/dive;
}


int main() {
     std::vector<int>v ={5, 2, -4, 1, 3};
     int ans=solve(v);
     cout<<ans<<endl;
}
