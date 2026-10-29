#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
      int ch=i;
      for(int j=1;j<i+1;j++)
      {
        cout<<ch<<" ";
        ch--;
      }
      cout<<endl;
    }
}