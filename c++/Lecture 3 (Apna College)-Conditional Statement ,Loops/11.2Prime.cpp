#include<iostream>
using namespace std;
int main()
{
    int n,i;
    bool isprime=true; // have a look, new to me
    cout<<"Enter n:";
    cin>>n;
    for(i=2;i*i<=n;i++)    //Here is the chage from 11.1
    {
        if(n%i==0)
        {
            isprime=false;
            break;
        }
    }
    if(isprime==true)
    {
        cout<<"Prime number.\n";

    }
    else
     cout<<"Non Prime Number\n";
return 0;
}