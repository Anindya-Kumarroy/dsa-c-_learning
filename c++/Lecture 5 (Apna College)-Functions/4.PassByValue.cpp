#include<iostream>
using namespace std;
int ChangeX(int x)
{
    x=2*x;
    cout<<"x = "<<x<<endl;
    return x;
}
int main()
{
    int x=5;
    ChangeX(x);
    cout<<"x = "<<x<<endl;
    return 0;
}