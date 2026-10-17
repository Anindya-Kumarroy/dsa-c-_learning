#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int arr[5];
    int n,i,target,start,end;
    int start_index,end_index;
    bool found=false;
    cout<<"How many numbers you want:";
    cin>>n;
    cout<<"Enter "<<n<< " elements:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter how much sum you want:";
    cin>>target;
    for(start=0;start<n;start++)
    {
        for(end=start+1;end<n;end++)
        {
           if(arr[start]+arr[end]==target)
           {
               start_index=start;
               end_index=end;
               found=true;
               break;
           }
           

        }
        if(found)
        {
            break;
        }
        
        
    }
    
    cout<<target<<" = sum of index "<<start_index<<" & "<<end_index<<endl;
    return 0;
}
