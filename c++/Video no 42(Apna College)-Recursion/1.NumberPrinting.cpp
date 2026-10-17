#include<iostream>
using namespace std;

void PrintNum(long long int n)              // Void Function
{
    if(n==1)                      // Base case
    {
        cout<<"1\n";
        return;
    }
      cout<<n<<" ";
    PrintNum(n-1);                // Recursive call
  
}

int main()
{
    long long int n;
    cout<<"Enter n:";
    cin>>n;
    PrintNum(n);                 // PrintNum function calling
    return 0;
}