#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    int temp;
    int rev=0;
    int rem;
    temp=n;

    while(temp>0)
    {
        rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    cout<<"Reverse number="<<rev<<endl;
}