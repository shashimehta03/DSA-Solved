#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={1, 1, 2, 2, 3, 4, 4, 5};
    int n=arr.size();
    if (n == 0) return 0;
    // for(int i=1;i<n;){
    //     int temp=arr[i-1];
    //     while(arr[i]==temp && i<n){
    //         arr[i]='_';
    //         i++;
    //     }
    //     i++;
    // }
    int index=1;
    int cnt=0;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            arr[index]=arr[i];
            index++;
            cnt++;
        }
    }
    
    // for(int i=1;i<n;i++){
    //     if(arr[i]=='_'){
    //         swap(arr[i],arr[i-1]);
    //     }
    // }
    
   // sort(arr.begin(),arr.end());
    
    for(int i=0;i<=n-cnt;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
