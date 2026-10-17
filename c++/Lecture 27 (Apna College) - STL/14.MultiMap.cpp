#include<iostream>
#include<map>
using namespace std;
int main()
{
       multimap<string,int>m;
       m.emplace("Bangladesh",50);                 // For map , it will be printed only 1 time.
       m.emplace("Bangladesh",50);
       m.emplace("Bangladesh",50);
       m.emplace("Bangladesh",50);

       m.erase(m.find("Bangladesh"));              // only one value will be erased.

       for(auto x:m)
       {
        cout<<x.first<<","<<x.second<<endl;
       }

}