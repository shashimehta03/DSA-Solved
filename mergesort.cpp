#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int left,int right){
    int mid=(left+right)/2;
    int len1=mid-left+1;
    int len2=right-mid;
    int k=left;
    int first[len1];
    int second[len2];
    for(int i=0;i<len1;i++){
        first[i]=arr[k++];
        
    }
    k=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[k++];
        
    }
    int index1=0;
    int index2=0;
    k=left;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[k++]=first[index1++];
        }
        else{
            arr[k++]=second[index2++];
        }
    }
    while(index1<len1){
        arr[k++]=first[index1++];
    }
    while(index2<len2){
        arr[k++]=second[index2++];
    }
}
void mergeSort(int arr[],int left,int right){
    if(left>=right){
        return ;
    }
    int mid=(left+right)/2;
    mergeSort(arr,left,mid);
    mergeSort(arr,mid+1,right);
    merge(arr,left,right);
}
int main(){
    int arr[10]={9,1,4,92,8,3,5,7,2,6};
    int n=10;
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
