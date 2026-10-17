#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    if(n>=0)
    {
        cout<< n<<" is positive.\n "<<endl;//printing value of n: 6 is positive.

    } else
    {
        cout<<n<<" is negative.\n"<<endl; // printing n is negative.
    }
    return 0;
}