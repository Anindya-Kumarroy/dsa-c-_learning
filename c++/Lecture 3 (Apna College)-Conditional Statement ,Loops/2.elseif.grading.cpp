#include<iostream>
using namespace std;
int main()
{
    int marks;
    cout<<"Enter marks:";
    cin>>marks;
    if(marks>=90 && marks<=100)
    {
        cout<<"A+" <<endl;
    }
    else if(marks>=80 && marks<90)
    {
        cout<<"A"<<endl;
    }
    else if(marks>=70 && marks<80)
    {
        cout<<"B"<<endl;
    }
    else
    {
        cout<<"Fail"<<endl;
    }
    return 0;
}