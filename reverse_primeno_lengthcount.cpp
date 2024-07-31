#include<bits/stdc++.h>
using namespace std;
int main(){
    // int count=1;
    // int n=18;
    // for(int i=2;i<=n/2;i++){
    //     if(n%i==0)
    //     count++;
    // }
    // if(count>2)
    // cout<<"not a prime number"<<endl;
    // else
    // cout<<"priime "<<endl;
    // return 0;
    int n=1019;
    int rem , reverse=0;
    int count=0;
    while(n!=0){
        rem=n%10;
        reverse=reverse*10+rem;
        n/=10; // only this in while loop also return the count of array
        count++;
    }
    cout<<reverse<<endl;
    cout<<count<<endl;
}
