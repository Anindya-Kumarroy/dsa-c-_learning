#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec={5,3,7,8,1,6};
    sort(vec.begin(),vec.end());
    cout<<"Sorted vector: ";
    for(int val: vec)
    {
        cout<<val<<" ";
    }
    cout<<endl;

    sort(vec.begin(),vec.end(),greater<int>());             //For reverse sorting. Also applicable for array.

    cout<<"Vector in descending order: ";
    for(int x:vec)
    {
        cout<<x<<" ";
    }
    cout<<endl;


}