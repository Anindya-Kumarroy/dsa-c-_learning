#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)                  //Base Case
    {
        return 1;
    }
    return n*fact(n-1);       // return value
}

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Factorial of "<<n<<" is "<<fact(n)<<endl;
    return 0;
}