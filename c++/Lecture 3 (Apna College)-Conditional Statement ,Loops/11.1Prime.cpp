#include<iostream>
using namespace std;
int main()
{
    int n,i;
    bool isprime=true; // have a look, new to me
    cout<<"Enter n:";
    cin>>n;
    for(i=2;i<n-1;i++)
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