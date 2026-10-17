#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p=&a;
    cout<<p<<endl;
    p++;
    cout<<p<<endl;        // integer value 4 bere jabe.
    p--;
    cout<<p<<endl;
}