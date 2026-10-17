#include<iostream>
using namespace std;
int IsAlphaNum(char ch)
{
    if(ch>='0' && ch<='9' || tolower(ch)>='a' && tolower(ch)<='z' )
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
   string str="A man A plan, A canal, : panama!";
  
   
   int start=0;
   int end=str.size()-1;
   while(start<end)
   {
    if(!IsAlphaNum(str[start]))
    {
        start++;
        continue;
    }
    if(!IsAlphaNum(str[end]))
    {
        end--;
        continue;
    }
    if(tolower(str[start])!=tolower(str[end]))
    {
        cout<<"Not Palindrome"<<endl;
        return 0;
    }
    start++;
    end--;
   }
cout<<"Palindrome"<<endl;
}