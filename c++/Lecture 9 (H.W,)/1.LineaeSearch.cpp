#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec={1,2,3,4,5,6,7,8,9,10};
    int target;
    cout<<"Enter the number you want to search:";
    cin>>target;
    bool found=false;
    int index=-1;
    for(int i=0;i<vec.size();i++)
    {
        if(vec[i]==target)
        {
            found=true;
            index=i;
        }
    }
    if(found)
    {
        cout<<target<<" found at index "<<index<<endl;
    }
    else
    cout<<target <<" not found"<<endl;
}