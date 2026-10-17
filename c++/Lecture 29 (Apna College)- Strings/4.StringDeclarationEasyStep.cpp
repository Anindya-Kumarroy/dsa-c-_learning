#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="Anindya Kumar";
    cout<<str<<endl;
    str="Ankita Seth";
    cout<<str<<endl;
    string str1="Ankita Seth loves ";
    string str2="Anindya Roy";
    string str3=str1+str2;               //Concatenation
    cout<<str3<<endl;
    cout<<(str1==str2)<<endl;            //comparing
}