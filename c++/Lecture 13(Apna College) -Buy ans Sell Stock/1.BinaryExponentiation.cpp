#include<iostream>
using namespace std;
long long int BinExp(int base,int exp)
{
    int ans=1;
    while(exp>0)
    {
        if(exp%2==1)
        {
           ans=ans*base;
        }
        
        base=base*base;
        exp=exp/2;
       
    }
    return ans;
}
int main()
{
    int n,x;
    cout<<"Enter base:";
    cin>>n;
    cout<<"Enter exponent:";
    cin>>x;
    long long int ans=BinExp(n,x);
    cout<<n<<" ^ "<<x<<" = "<<ans<<endl;
    return 0;
}