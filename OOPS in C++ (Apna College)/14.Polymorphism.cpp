// Compile time polymorphism.
//condtructor overloading.
#include<iostream>        
#include<string>
using namespace std;

class student{
    public:
string name;

student()
{
    cout<<"Non-parameterized!\n";
}

student(string name)
{
    this->name=name;
    cout<<"Parameterized!\n";
}

};

int main()
{
student s1;                       // the process of knowing which function will be called is called constructor overloading and this is an example of polymorphism.
student s2("Anindya");  
return 0;
}