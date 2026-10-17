#include<iostream>
using namespace std;

class teacher{
public:
string subject;
double salary;
};

class student{
public:
string name;
int roll;

};

class TeachingAssistant: public teacher,public student {      // remember the process for multiple inheritance.

};

int main()
{
TeachingAssistant t1;
t1.name="Anindya Kumar";
t1.salary=75000;
t1.subject="CSE";
t1.roll=1;

cout<<"Details for teaching assistant:\n"<<"Name: "<<t1.name<<"\nSalary: "<<t1.salary<<"\nSubject:"<<t1.subject<<"\nRoll no:"<<t1.roll<<endl;
}