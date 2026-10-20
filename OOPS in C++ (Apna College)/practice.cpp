#include<iostream>
using namespace std;

class Anindya{
    private:
    double salary;
    public:
    string dept;
    string subject;
    string college;

    Anindya(){
        dept="CSE";
        subject="JavaScript";
        college="Hit Haldia";
    }

    void changeDept(string newDept)
    {
        dept=newDept;
    }

    void changeSub(string newSub)
    {
        subject=newSub;
    }
    
    void changeCollege(string newCollege)
    {
        college=newCollege;
    }
   

};

int main()
{
Anindya A;
string data;
int choice;
do{
    cout<<"........Menu........\n1.Dept\n2.Subject\n3.College\n4.Change Dept\n5.Change Subject\n6.Change College\n7.Exit\n"<<endl;
    cout<<"Enter your choice:";
    cin>>choice;

    switch(choice)
    {
        case 1:
        cout<<"Dept:"<<A.dept<<endl;
        break;
        case 2:
        cout<<"Subject:"<<A.subject<<endl;
        break;
        case 3:
        cout<<"College:"<<A.college<<endl;
        break;
        case 4:
        cout<<"Enter new Dept:";
        cin>>data;
        A.changeDept(data);
        cout<<"Dept changed to "<<data<<endl;
        break;
        case 5:
        cout<<"Enter new subject:";
        cin>>data;
        A.changeSub(data);
        cout<<"Subject changed to "<<data<<endl;
        break;
        case 6:
        cout<<"Enter new College:";
        cin>>data;
        A.changeCollege(data);
        cout<<"College changed to "<<data<<endl;
        break;
        case 7:
        exit(0);
        default:
        cout<<"Wrong choice!\n Enter between 1-7!";
    }
    
}
while(choice!=7);
}