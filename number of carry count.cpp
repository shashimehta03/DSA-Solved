#include<bits/stdc++.h>
using namespace std;
int solve(int nums1,int nums2){
    int count=0;
    int carry=0;
    while(nums1 && nums2){
        if((nums1%10)+(nums2%10) + carry>9){
            count++;
            carry=1;
            nums1/=10;
            nums2/=10;
            
        }
        else{
            nums1/=10;
            nums2/=10;
            carry=0;
        }
    }
    return count;
    
    
}
int main(){
    int nums1=999;
    int nums2=563;
    int ans=solve(nums1,nums2);
    cout<<ans<<endl;
    
    
}
