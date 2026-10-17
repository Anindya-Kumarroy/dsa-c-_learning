#include<iostream>
#include<map>
using namespace std;
int main()
{
map<string,int> m;
m["Aradhya"]=100;
m["Anindya"]=99;                                               //Given on first position because it is sorted on key order.
m["Bangladesh"]=100;
m["India"]=50;
m.insert({"Germany",55});                                      //insert
m.emplace("Canada",60);                                        //emplace
for(auto p: m)
{
  cout<<p.first<<" "<<p.second<<endl;                          //sorted on key order.
}

m.erase("India");                                              // erase

cout<<"Count of India:"<<m.count("India")<<endl;               // printing count
cout<<"Count of Anindya:" <<m.count("Anindya")<<endl;          //printing value of key Anindya

if(m.find("India")!=m.end())                                   // If not found it will return m.end(), So if it is not equal to m.end() then it is found.
{
    cout<<"Found"<<endl;
}
    else
    {
    cout<<"Not found"<<endl;
    }

    if(m.find("Bangladesh")!=m.end())                          // qfound because it is there.
{
    cout<<"Found"<<endl;
}
    else
    {
    cout<<"Not found"<<endl;
    }

cout<<"Value of Germany:"<<m["Germany"]<<endl;                             //printing value of key Germany

} 