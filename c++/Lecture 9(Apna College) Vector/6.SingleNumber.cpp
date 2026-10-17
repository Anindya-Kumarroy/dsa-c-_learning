#include<iostream>
using namespace std;
int main()
{
    vector<int>vec;
    int number;
    int n;
    int ans=0;
    cout<<"How many numbers you want: ";
    cin>>n;
    cout<<"Enter "<<n<<" numbers: ";
    for(int i=0;i<n;i++)
    {
        cin>>number;
        vec.push_back(number);
    }

    cout<<"Inputed numbers are: ";
    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;

    for(int val: vec)
    {
      ans^=val;
    }
    cout<<"Single number: ";
    cout<<ans<<endl;

}