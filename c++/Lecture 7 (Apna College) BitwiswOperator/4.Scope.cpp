#include<iostream>
using namespace std;
int x=10;  
void fun()
{
    cout<<x<<endl;
}  //Global Scope
int main()
{
    fun();
cout<<x<<endl;

if(3>1)
{
  int y=12;   //Local Scope Error!
  cout<<y<<endl;
}
//cout<<y<<endl;   //Error!
}