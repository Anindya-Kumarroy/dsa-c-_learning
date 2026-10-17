#include<iostream>
using namespace std;

class person{
    public:
    string name;
    int age;

    person()
    {
        cout<<"Parent constructor."<<endl;                // will be printed/called first.
    }

};

class student: public person{                             //inheritance syntax.
public:
int roll;

student(){
    cout<<"Child constructor."<<endl;                      // will be called/printed after parent constructor
}

void getinfo()
{
    cout<<"Name:"<<name<<endl<<"Age: "<<age<<endl<<"Roll :"<<roll<<endl;
}
};

int main()
{
student s1;
s1.name="Anindya Kumar";
s1.age=21;
s1.roll=40;
s1.getinfo();
}