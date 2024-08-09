#include<bits/stdc++.h>
using namespace std;
class A{ //wrappling up data ,function  in one bundle is known  as encapluation
  
    private:
    int salary=1000;
    public:
    A(){ //constructor //non parameterized
      cout<<"main constructor hu bhaiya main dept ko computerkr rha hu jab onject create ho rha hai tb"<<endl;
     /// dept="computer science";
      }
    A(string n, string d, int i){ //parameterized constructor
        name=n;
        dept=d;
        id=i;
        
        
    }
      
    int id;
    string name;
    string dept;
    void print(){
        cout<<"my name is "<<name<<endl;
        cout<<"my id is "<<id<<endl;
        cout<<"department"<<dept<<endl;
        cout<<"my salary is "<<salary<<endl;
    }
    ~A(){
        cout<<"kr diya delete main hu destructor"<<endl;
       // delete cgpa;// for dynamically alloted memory
    }
};
int main(){
    A obj; // constructor called
    obj.name="shashi";
    obj.id=7093;
    //obj.salary=100000;  it cannot be acces as it in the private 
    obj.print();
    
    // A obj("parameterized Shashi" , "CSE" , 2710) ; //parameterized constructor
    // obj.print();
    // A obj2(obj); //copy constructor uses the data oof obj 
    // obj2.print();
    
    
}
