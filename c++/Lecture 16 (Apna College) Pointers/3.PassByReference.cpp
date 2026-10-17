#include<iostream>
using namespace std;
void changeA(int *ptr)
{
    *ptr=20;
}
int main()
{
    int a=20;
   
    changeA(&a);
    cout<<"After changing a = "<<a<<endl;
    return 0;
}