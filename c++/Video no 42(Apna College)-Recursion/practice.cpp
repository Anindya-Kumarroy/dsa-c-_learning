#include<iostream>
using namespace std;
void fact(int n)
{
   if(n==1)
   {
    cout<<"1\n"<<endl;
    return;
   }
   cout<<n<<" ";
   fact(n-1);
  
}

int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    fact(n);
}