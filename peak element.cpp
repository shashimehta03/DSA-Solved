// 1234578987654321
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10 ,12,8,7,6,5,4};
    int left=0;
    int right=10;
    while(left<right){
        int mid=(left+right)/2;
        if(arr[mid]>=arr[mid-1] && arr[mid]>=arr[mid+1]){
            cout<<arr[mid]<<"ajsn";
            break;
        }
        else if(arr[mid]<arr[mid-1]){
           right=mid-1;
        }
        else{
           left=mid+1;
        }
        
    }
    //cout<<arr[left];
    
    return 0;
    
}
