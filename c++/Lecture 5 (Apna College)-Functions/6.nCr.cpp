#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact=1;
    int i;
    for(i=1;i<=n;i++)
    {
        fact*=i;

    }
    return fact;
}
int nCr(int n,int r)
{
    int fact_n=factorial(n);
    int fact_r=factorial(r);
    int fact_nmr=factorial(n-r);
    return fact_n/(fact_r*fact_nmr);
}
int main()
{
    int n,r;
    cout<<"Enter n:";
    cin>>n;
    cout<<"Enter r:";
    cin>>r;
    cout<<"nCr="<<nCr(n,r)<<endl;
    return 0;


}