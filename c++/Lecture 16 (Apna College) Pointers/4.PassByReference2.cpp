#include<iostream>
using namespace std;
void changeA(int &b)
{
    b=200;
}
int main()
{
    int a=10;
    changeA(a);
    cout<<"After changing a = "<<a<<endl;
}