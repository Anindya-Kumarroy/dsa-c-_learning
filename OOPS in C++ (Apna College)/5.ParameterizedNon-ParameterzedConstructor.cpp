// written from gemini.

#include<iostream>
using namespace std;

class Mobile
{
public:
string brand;
string model;
int ram;

//Non-Parameterized
Mobile(){
    brand="Samsung";
    model="J max";
    ram=4;
}                                                
                                                    // Having two same name constructor (parameterized & Non-Parameterized) in one class is called constructor overloading.
//Parameterized
Mobile(string b,string m,int r)
{
    brand=b;
    model=m;
    ram=r;
}

void display(){
    cout<<"Brand : "<<brand<<" Model : "<<model<<" Ram : "<<ram<<endl;
}

};

int main()
{
Mobile m1;

cout<<"Details of phone one : "<<endl;
m1.display();

Mobile m2("Iphone","18 Pro Max",8);
Mobile m3("Pixel","8 Pro",6);
cout<<"Details of phone two : "<<endl;

m2.display();

cout<<"Details of phone Three : "<<endl;

m3.display();
return 0;

}