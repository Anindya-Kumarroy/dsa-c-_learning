#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
    vector<int>x={2,3,5,22,4,6};
    int target=11;
    int end=x.size()-1;
    int start=0;
    
    int count=0;
    sort(x.begin(),x.end());
   

    while(start<end)
    {
        if(x[start]+x[end]==target)
        {
            cout<<" Indexes are :"<<start<<" , "<<end<<endl;
            count++;
            start++;
            end--;
        }
        else if((x[start]+x[end])<target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    if(count==0)
    {
        cout<<"Not found!"<<endl;
    }



}
