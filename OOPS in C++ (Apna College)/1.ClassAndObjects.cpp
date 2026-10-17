#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Teacher{
private:
double salary;

// public    -  Data and methods are accessible to everyone.
// Private   -  Data and methods are accessible inside class.
// Protected -  Data and methods are accessible inside class and it's derived class.


public: 

// Properties/Attributes
string name;
string dept;
string subject;



//Methods/ Member functions

void ChangeDept(string NewDept)           //Nothing just function call from main function -1 
{
    dept=NewDept;
}

//setter

void setSalary(double s)                 //Nothing just function call from main function -2

{
    salary=s;
}

//getter

double getSalary()
{
    return salary;
}

void changename(string name2)             //Nothing just function call from main function -3

{
    name=name2;
}

void changesubject(string news)           //Nothing just function call from main function -4

{
   subject=news; 
}


};


int main()
{
Teacher t1;

string newsub;

t1.name="Anindya";
t1.dept="Computer Science";
cout<<"Dept:"<<t1.dept<<endl;
t1.subject="C++ ";
t1.ChangeDept("Mechanical");           
t1.setSalary(2400000);
t1.changename("Neirjara");

cout<<"Subject:"<<t1.subject<<endl;
cout<<"Dept:"<<t1.dept<<endl;

cout<<"Enter new subject:";
cin>>newsub;
t1.changesubject(newsub);
cout<<"Name: "<<t1.name<<endl;
cout<<"salary="<< fixed << setprecision(0)<<t1.getSalary()<<endl;     // fixed << setprecision(0) used for printing 240000; otherwise salary=2.4e+06  will be printed.
cout<<"New dept:"<<t1.dept<<endl;                                     // ChangeDept function call.

cout<<"New Subject:"<<t1.subject<<endl;
}