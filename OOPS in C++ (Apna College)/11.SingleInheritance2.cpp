
//single inheritance.

#include<iostream>
using namespace std;

// Base Class বা Parent Class (মূল ক্লাস)
class person {
public:
    string name; // ব্যক্তির নাম সংরক্ষণের ভ্যারিয়েবল
    int age;     // ব্যক্তির বয়স সংরক্ষণের ভ্যারিয়েবল

    // Person ক্লাসের কনস্ট্রাক্টর (Constructor)
    person(string name, int age) {
        this->name = name; // প্যারামিটার থেকে আসা নাম ক্লাসের ভ্যারিয়েবলে অ্যাসাইন করা
        this->age = age;   // প্যারামিটার থেকে আসা বয়স ক্লাসের ভ্যারিয়েবলে অ্যাসাইন করা
    }
};

// Derived Class বা Child Class (যা person ক্লাসকে ইনহেরিট করছে)
class student : public person {                       // if private declared then can't be used in main function. 
    //protected is only used for inheritance.
public:
    int roll; // ছাত্রের রোল নম্বর সংরক্ষণের ভ্যারিয়েবল

    // Student ক্লাসের কনস্ট্রাক্টর
    // এখানে person(name, age)-এর মাধ্যমে Parent ক্লাসের কনস্ট্রাক্টরকে কল করা হচ্ছে
    // যেহেতু Parent ক্লাসের কনস্ট্রাক্টর আগেই ডিফাইন করা আছে, তাই এখানে আবার ডাটা টাইপ লেখার প্রয়োজন নেই
    student(string name, int age, int roll) : person(name, age) {
        this->roll = roll; // নিজস্ব ভ্যারিয়েবল 'roll' সেট করা হচ্ছে
    }

    // মেম্বার ফাংশন - ছাত্রের সমস্ত তথ্য প্রিন্ট করার জন্য
    void getinfo() {
        cout << "Name:" << name << endl; // Parent ক্লাস থেকে পাওয়া 'name' প্রিন্ট
        cout << "Age:" << age << endl;   // Parent ক্লাস থেকে পাওয়া 'age' প্রিন্ট
        cout << "Roll:" << roll << endl; // নিজস্ব 'roll' প্রিন্ট
    }
};

int main() {
    // student ক্লাসের একটি অবজেক্ট (s1) তৈরি করা হলো এবং ইনিশিয়াল ভ্যালু পাস করা হলো
    student s1("Anindya Kumar", 21, 40);
    
    // অবজেক্টের মাধ্যমে getinfo() ফাংশন কল করে আউটপুট দেখানো হচ্ছে
    s1.getinfo();
    
    return 0;
}