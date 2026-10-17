#include<iostream>
using namespace std;
int conversion(int n)
{
int ans=0,rem,pow=1;
while(n>0)
{
    rem=n%10;
    ans=ans+pow*rem;
    pow=pow*2;
    n=n/10;
}
return ans;
    
}
int main()
{
   cout<<"Binary to decimal:"<<endl;
   cout<<conversion(1010)<<endl;
}