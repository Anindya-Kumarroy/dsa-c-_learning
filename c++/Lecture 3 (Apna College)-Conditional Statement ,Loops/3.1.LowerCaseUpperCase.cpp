#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a character:";
    cin>>ch;
    if(ch>='a' && ch<='z')
    {
    cout<<ch<<" is lower case\n";
    }
    else if(ch>='A' && ch<='Z')
    {
    cout<<ch<<" is Upper case\n";
    }
    else
    {
        cout<<ch<<" is not a valid letter\n";
    }

}