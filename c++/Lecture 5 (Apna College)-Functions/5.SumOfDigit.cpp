#include<iostream>
using namespace std;
int DigitSum(int n)
{
    int LastDigit,Sum=0;
    while(n>0)
    {
     LastDigit=n%10;
     Sum=Sum+LastDigit;
     n=n/10;

    }
    return Sum;
}
int main()
{
    cout<<DigitSum(444)<<endl;
    return 0;
}