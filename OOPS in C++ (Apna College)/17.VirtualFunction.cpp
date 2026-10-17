// Function Overriding-এর সহজ উদাহরণ (Compile-time Binding)
#include<iostream>
using namespace std;

// Base / Parent Class
class parent {
public:
    // Parent ক্লাসের নিজস্ব ফাংশন
    void getinfo()
    {
        cout << "Parent class\n";
    }

    virtual void hello()
    {
        cout<<"Hello from parent\n";
    }
};

// Derived / Child Class (parent ক্লাসকে Inherit বা উত্তরাধিকার সূত্রে গ্রহণ করছে)
class child : public parent {
public:
    // Function Overriding: Parent ক্লাসের getinfo() ফাংশনটিকে 
    // হুবহু একই নাম ও সিগনেচারে চাইল্ড ক্লাসে আবার লিখে Overwrite/Override করা হলো।
    void getinfo()
    {
        cout << "child class\n";
    }

    void hello()
    {
        cout<<"Hello from child\n";
    }

};

int main()
{
    child c1;
    c1.hello();

    return 0;
}