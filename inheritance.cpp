#include<bits/stdc++.h>
using namespace std;
class person{
    public:
    string name;
    int age;
    person(string name, int age){
        cout<<"person constrvtor"<<endl;
        this->name=name;
        this->age=age;
    }
    ~person(){
        cout<<"person destructor"<<endl;
    }
};
class student:public person{
    public:
    int rollno;
    student(string name, int age, int rollno) : person(name, age) {
        cout<<"student const"<<endl;
        this->rollno = rollno;
    }
    
    
    void info(){
        cout<<"my name is "<<name<<endl;
        cout<<"my age is "<<age<<endl;
        cout<<"my roll no is "<<rollno<<endl;
    }
    ~student(){
        cout<<"student destructor"<<endl;
    }
};

int main(){
  student obj1("Shashi", 21, 7093);

    obj1.info();
    
  
}
