#include<iostream>
#include<vector>
using namespace std;
int main()
{
vector<int>array={5,2,11,7,15};
int target=13;
int x=0;
for(int i=0;i<array.size();i++)
{
    int first=array[i];
       for(int j=i+1;j<array.size();j++)
       {
        int second=array[j];
        if(target==array[i]+array[j])
        {
            x++;
          cout<<"Indexes are: "<<i<<" , "<<j<<endl;
        }
       }
}
if(x==0)
{
cout<<"Not found"<<endl;
}
return 0;
}