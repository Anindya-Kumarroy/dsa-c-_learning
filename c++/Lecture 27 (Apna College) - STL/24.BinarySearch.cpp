#include<iostream>
using namespace std;
int main()
{
    vector <int>vec={1,2,3,4,5};
    int target=5;
    cout<<(binary_search(vec.begin(),vec.end(),target))<<endl;      //if found it will return 1 otherwise 0.
}