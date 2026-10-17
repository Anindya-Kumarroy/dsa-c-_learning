#include<iostream>
using namespace std;
int main()
{
    string s="bac";
    // next_permutation(s.begin(),s.end());                         //it is also valid. 
    prev_permutation(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}