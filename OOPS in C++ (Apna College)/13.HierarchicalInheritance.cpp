#include<iostream>
using namespace std;

class person{                      //both class inherited from this one.
public:
string name;
int age;
};

class student:public person{
public:
int roll;
};

class teacher:public person{
public:
string subject;

};

int main()

{
teacher t1;
t1.name="Anindya";
t1.subject="C++";
t1.age=21;
cout<<"Teacher details:\n";
cout<<"Name:"<<t1.name<<"\nSubject:"<<t1.subject<<"\nAge:"<<t1.age<<endl;

cout<<endl;
student s1;
s1.name="Neirjara";
s1.roll=3;
s1.age=21;
cout<<"Student details:\n";
cout<<"Name:"<<s1.name<<"\nRoll:"<<s1.roll<<"\nAge:"<<s1.age<<endl;


}