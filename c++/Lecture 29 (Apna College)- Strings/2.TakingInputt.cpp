#include<iostream>
using namespace std;
int main()
{
    char str[100];
    cout<<"Enter character array:";
    cin.getline(str,100,'$');              // For taking sentence input. $(Can be any other sign) indicates end of line.
    cout<<"Output:"<<str<<endl;
}