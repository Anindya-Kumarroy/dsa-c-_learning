#include<iostream>
using namespace std;
int main()
{
    int n;
    int pos=-1;
    cout<<"Enter n:";
    cin>>n;
    if(n>0 && (n&(n-1))==0)
    {
        pos=log2(n);
    }
    if(pos==-1)
    {
        cout<<n<<" is not number that is a power of 2 to the power something."<<endl;
    }
    else
    cout<<n<<" is equal to 2 to the power "<<pos<<endl;
}