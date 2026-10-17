#include<iostream>
using namespace std;
int conversion(int n)
{
    int pow=1,ans=0;
    int rem;
    while(n>0)
    {
        rem=n%2;
        n=n/2;
        ans+=rem*pow;
        pow*=10;
    }
    return ans;
}
int main()
{
    cout<<"Binary from 1 to 10"<<endl;

   for(int i=1;i<=10;i++)
   {
    cout<<conversion(i)<<endl;
   }
return 0;
}