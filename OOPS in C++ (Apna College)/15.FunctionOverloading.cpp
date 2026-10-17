//Function overloading.

#include<iostream>
#include<string>
using namespace std;

class print{
public:
void show(int x)
{
    cout<<"int:"<<x<<endl;
}
void show(char ch)
{
    cout<<"Char:"<<ch<<endl;
}
};

int main()
{
print p1;
p1.show(8);
p1.show('a');   // it will be single quote.
}