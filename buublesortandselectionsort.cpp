#include<bits/stdc++.h>
using namespace std;
vector<int>bubbleSort(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
    return arr;
}
vector<int>selectionSort(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int min_indx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_indx]){
                min_indx=j;
            }
        }
        swap(arr[i],arr[min_indx]);
    }
    return arr;
}
int main(){
    std::vector<int>v={9,2,8,3,7,1,6,5,2};
    //vector<int>ans=bubbleSort(v);
    //vector<int>ans=selectionSort(v);
    vector<int>ans=insertionSort(v);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }cout<<endl;
}
