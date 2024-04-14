#include<bits/stdc++.h>
using namespace std;
void sorts(vector<int> &v, int size); // function prototype
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>> a;
        v.push_back(a);
    }
    sorts(v,n);
    cout<<"output"<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
void sorts(vector<int> &v, int x){
  int size,pos, temp,small;
  for(int i=0;i<size-1;i++){
      small=v[i];
      pos=i;
      for(int j=i+1;j<size;j++){
          if(v[i]<small){
              small=v[j];
              pos=j;
          }
      }
      temp=v[i];
      v[i]=v[pos];
      v[pos]=temp;
      
  }
}
