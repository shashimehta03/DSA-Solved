#include<bits/stdc++.h>
using namespace std;
bool solve(vector<int> v, int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                int x=v[i] *v[i],  y=v[j] *v[j] , z=v[k] *v[k];
                if((x==y+z )|| (y==x+z) || ( z== x+y))
                return true;
            }
        }
    }
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>> a;
        v.push_back(a);
    }
    bool ans=solve(v, n);
    if(ans==true){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false";
    }
}
