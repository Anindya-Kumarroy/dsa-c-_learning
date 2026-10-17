#include<iostream>
using namespace std;

void fun()
{
    static int x=0;              // এটি প্রোগ্রাম চলাকালীন কেবল একবারই ইনিশিয়ালাইজ হবে
    cout<<"x:"<<x<<endl;
    x++;
}

int main()
{
fun();
fun();
fun();
return 0;
}