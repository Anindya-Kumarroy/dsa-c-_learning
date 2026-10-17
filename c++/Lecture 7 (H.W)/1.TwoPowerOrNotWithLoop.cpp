#include<iostream>
using namespace std;
int main()
{

    int pos=-1;
    int i;
    int n;
    cout<<"Enter n:";
    cin>>n;
    for(i=0;i<10;i++)
    {
        if(n==(1<<i))
        {
            pos=i;
            break;
        }
    }
    if(pos==-1)
    {
        cout<<n<<" is not a number of two's power "<<endl;

    }
    else
    {
        cout<<n<<" = 2 to the power "<<pos<<endl;
    }

}