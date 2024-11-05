#include<bits/stdc++.h>
using namespace std;
int main(){
    string str(5,'g');
    string defineway1="string define way 1";
    string defineway2("this is way 2");
    cout<<str<<endl;
    string input;
    getline(cin,input);//taking input
    cout<<input<<endl;
    cout<<defineway1<<endl;
    cout<<defineway2<<endl;
    string functioncheck="this is function check";
    cout<<functioncheck.size()<<endl;
    cout<<functioncheck.length()<<endl;
    cout<<functioncheck.find('e')<<endl;
    functioncheck.push_back('c'); //push elemnt
    cout<<functioncheck<<endl;
    functioncheck.pop_back(); //pop from back
    cout<<functioncheck<<endl;
    functioncheck.replace(0,1,4,'&'); //start end times replacement
    cout<<functioncheck<<endl;
    functioncheck.clear();
    cout<<functioncheck<<endl; //data erased
    cout<<endl;
    cout<<"2 string uses"<<endl;
     char * str1="abcdef";
    char *str2="abcghijkl";
     int val = strncmp(str1, str2, 2); //to use strncmp the string must have in character pointer form
    if(!val) cout<<"first 2 element are same"<<endl;
    else cout<<"not same"<<endl;
    
    string st1="streiii1i";
    string st2="strei2";
    // cout<<strchr(st1,'i')<<endl;
   // cout<<strcat(st2,st1);
   cout<<st1.substr(0,5)<<endl;
   
   cout<<"Iterationg function"<<endl;
   cout<<st1.rfind('i'); // find the element from back;
    
    
    
    
    
}
