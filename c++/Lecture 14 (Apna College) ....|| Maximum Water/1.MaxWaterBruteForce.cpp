#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>water={3,2,5,6,7,4,9};
    int MaxWater=1;
    int i,j,height=1,length=1,area=1;
    for(i=0;i<water.size();i++)
    {
        for(j=i+1;j<water.size();j++)
        {
           height=min(water[i],water[j]);
           length=j-i;
           area=height*length;
           MaxWater=max(MaxWater,area);
        }

    }
    cout<<"Maximum Water:"<<MaxWater<<endl;
    return 0;
}