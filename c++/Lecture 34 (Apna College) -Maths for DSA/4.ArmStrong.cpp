#include<iostream>
using namespace std;
void Armstrong(int n)
{
    int temp=n;
    int rem=0;
    int sum=0;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }
    if(sum==n)
    {
        cout<<"Armstrong number"<<endl;

    }
    else
    {
        cout<<"Not an armstrong number"<<endl;
    }
}
int main()
{
    int n=153;
    Armstrong(n);
    return 0;
}