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
};

int main()
{
    // child ক্লাসের একটি অবজেক্ট c1 তৈরি করা হলো
    child c1;
    
    // c1.getinfo() কল করলে child ক্লাসের ওভাররাইড করা getinfo() চলবে
    // কারণ এটি Parent-এর ফাংশনটিকে ঢেকে দিয়েছে (Override করেছে)।
    c1.getinfo(); // আউটপুট: child class

    // parent ক্লাসের একটি অবজেক্ট p1 তৈরি করা হলো
    parent p1;
    
    // p1.getinfo() সরাসরি parent ক্লাসের মূল getinfo() ফাংশনটিকে কল করবে।
    p1.getinfo(); // আউটপুট: Parent class

    return 0;
}