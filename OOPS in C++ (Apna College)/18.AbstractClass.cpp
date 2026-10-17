#include<iostream>
using namespace std;

class shape{          // abstract class.
virtual void draw()=0;  //pure virtual function.
};

class circle: public shape{
public:
void draw()
{
    cout<<"Drawing a circle\n";
}
};

class rectangle: public shape{
public:
void draw()
{
    cout<<"Drawing a rectangle\n";
}
};


int main()
{
circle c1;
c1.draw();
}