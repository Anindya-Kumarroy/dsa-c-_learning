#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>nums1={1,2,3,4,5};
    vector<int>nums2(5,1);


    vector<int>nums5;             
    nums5.push_back(1);
    nums5.push_back(2);
    nums5.push_back(3);
    nums5.push_back(4);

    nums5.push_back(5);
                                   


    cout<<"Capacity:"<<nums5.capacity()<<endl;    //for judging capacity!!
    cout<<"Value at index 2:"<<nums5[2]<<endl;

    int n=nums1.size();
    int n2=nums2.size();
    vector<int>nums3(nums1);
    for(int i=0;i<n;i++)
    {
    cout<<nums1[i]<<" ";
    }
    cout<<endl;

     for(int i=0;i<n2;i++)
    {
    cout<<nums2[i]<<" ";
    }
    cout<<endl;
    for(int val:nums3)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    nums1.erase(nums1.begin()+2);
    nums1.insert(nums1.begin()+2,100);
    for(int val:nums1)
    {
        cout<<val<<" ";
    }
    cout<<endl;
   
    cout<<"Is empty:"<<nums1.empty()<<endl;
     nums1.clear();
     cout<<"Is empty:"<<nums1.empty()<<endl;
}  