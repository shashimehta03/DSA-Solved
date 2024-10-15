#include<bits/stdc++.h>
using namespace std;
void eclipse(int b,int h){
    cout<<"area "<<3.14 *b *h;
    cout<<endl;
}
void AreaofTriangle(int b,int h){
    cout<<"area if base and height is given "<<1/2 *(b*h);
    cout<<endl;
}
void AreaofTriangleSide(int a,int b, int c){
    int s=(a+b+c)/2;
    cout<< sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<endl;
}
void volumeofCone(int r,int h){
    cout<< (3.14 *r *r *h)/3;
}
int main(){
    eclipse(2,5);
    AreaofTriangle(10,12);
    AreaofTriangleSide(5,5,5);
    volumeofCone(2,5);
}
