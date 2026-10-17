#include <iostream>
#include <string>
using namespace std;

// ১. প্রথম ক্লাস: Engine
class Engine {
public:
    int horsepower = 150; // public ভেরিয়েবল

    void start() {
        cout << "Engine started : Vroom Vroom!" << endl;
    }
};

// ২. দ্বিতীয় ক্লাস: Car (যা Engine ক্লাসের ডিটেইলস ব্যবহার করবে)
class Car {
public:
    string brand = "Toyota";
    
    // Engine ক্লাসের একটি অবজেক্টকে Car ক্লাসের মেম্বার হিসেবে নেওয়া হলো
    // object made.
    Engine myEngine; 

    // Car ক্লাসের নিজস্ব একটি মেথড
    void showCarDetails() {
        cout << "Brand : " << brand << endl;
        
        // অন্য ক্লাস (Engine) এর ভেরিয়েবল অ্যাক্সেস করা হচ্ছে
        cout << "Horsepower of engine:" << myEngine.horsepower << " HP" << endl;
        
        // অন্য ক্লাস (Engine) এর মেথড কল করা হচ্ছে
           myEngine.start();
    }
};

// ৩. মেইন ফাংশন (শুধু রান করার জন্য)
int main() {
    Car myCar; // Car ক্লাসের অবজেক্ট তৈরি করা হলো
    
    // Car ক্লাসের মেথড কল করলেই সেটি ভেতরের Engine ক্লাসের কাজও করে দেবে
    myCar.showCarDetails(); 

    return 0;
}

