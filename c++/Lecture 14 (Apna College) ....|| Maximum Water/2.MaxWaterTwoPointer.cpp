#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
vector<int>water={1,8,6,2,5,4,8,3,7};
int h,w;
int CurrentWater=0;
int MaxWater=0;
int i,j;
int lp=0;
int rp=water.size()-1;
while(lp<rp)
{    
    w=rp-lp;
    h=min(water[rp],water[lp]);
    CurrentWater=w*h;
    MaxWater=max(CurrentWater,MaxWater);
    water[lp]<water[rp]? lp++:rp--;
}
cout<<"Max Water="<<MaxWater<<endl;

}