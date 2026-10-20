#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Teacher{
private:
double salary;


public: 


string name;
string dept;
string subject;

void ChangeDept(string NewDept)
{
    dept=NewDept;
}

void setSalary(double s)
{
    salary=s;
}

double getSalary()
{
    return salary;
}

Teacher(){                                                          // Constructor will be called automatically.
    cout<<"Hi, I am Anindya."<<endl;
}

};


int main()
{
Teacher t1;                                                         // It will call constructor.
t1.name="Anindya";
t1.dept="Computer Science";
t1.subject="C++ ";
t1.ChangeDept("Mechanical");
t1.setSalary(2400000);
cout<<"salary="<< fixed << setprecision(0)<<t1.getSalary()<<endl;   //jokhon class er vitorei print korbo tokhon sudhu variable er nam, r jokhon baire korbo tokhon object.variable kore print korte hbe.  
cout<<"New dept:"<<t1.dept<<endl;                                   // from Computer Science to Mechanical.  
}                               