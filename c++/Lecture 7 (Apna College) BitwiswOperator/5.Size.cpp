#include<iostream>
using namespace std;
int main()
{
    unsigned x=-10; //garbage
    signed y=-14;
    cout<<sizeof(int)<<endl;
    cout<<sizeof(long int)<<endl;
    cout<<sizeof(long long int)<<endl;
    cout<<sizeof(short int)<<endl;
    cout<<x<<endl;
    cout<<y<<endl;
}


// Singed int = Can store both Positive and Negative value.
// Singed int = Can store only Positive and Zero.