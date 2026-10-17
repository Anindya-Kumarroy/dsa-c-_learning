#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==1)                                          //Base case
    {
        return 1;
    } 
    return n+sum(n-1);                                //Return value
}
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Sum of "<<n <<" numbers:"<<sum(n)<<endl;
    return 0;
}