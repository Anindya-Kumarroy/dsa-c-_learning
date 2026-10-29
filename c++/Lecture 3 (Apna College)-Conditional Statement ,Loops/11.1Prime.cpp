#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    bool isPrime=true;
    if(n<2)
    {
        isPrime=false;
    }
    else
    {

    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            isPrime=false;
            break;
        }
    }
}
    if(isPrime)
    {
        cout<<"Prime number!\n";
    }
    else
    {
        cout<<"Not prime number!\n";
    }

}