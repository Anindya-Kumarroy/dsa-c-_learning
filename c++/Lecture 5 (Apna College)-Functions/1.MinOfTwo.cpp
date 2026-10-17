#include<iostream>
using namespace std;
int minoftwo(int a,int b) //Parameters
{
    if(a<b)
    {
        return a;
    }
    else
    return b;
}
int main()
{
    cout<<"Minimum of Two = "<<minoftwo(5,3)<<endl;  //Arguments
}