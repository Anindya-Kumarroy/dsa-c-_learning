#include<iostream>
using namespace std;

class Student {

public:
    double age; // শিক্ষার্থীর বয়স সংরক্ষণের জন্য ভ্যারিয়েবল (Attribute)

    // প্যারামিটারাইজড কনস্ট্রাক্টর (Parameterized Constructor)
    // যখন নতুন অবজেক্ট তৈরি করার সময় সরাসরি বয়স (যেমন: 20) পাঠানো হবে, তখন এটি রান করবে।
    Student(double age)
    {
        // 'this->age' হলো ক্লাসের নিজস্ব ভ্যারিয়েবল, আর ডানপাশের 'age' হলো ইনপুট হিসেবে আসা প্যারামিটার।
        this->age = age; 
    }

    // কপি কনস্ট্রাক্টর (Copy Constructor)
    // যখন একটি তৈরি করা অবজেক্টকে অন্য একটি নতুন অবজেক্টে কপি করা হবে, তখন এটি রান করবে।
    Student(const Student &s)              
    {
        cout<<"I am custom copy constructor."<<endl;
        // এখানে 's' হলো যে অবজেক্টটিকে কপি করা হচ্ছে (যেমন s1)। 
        // 's.age' থেকে বয়সটি নিয়ে নতুন তৈরি হওয়া অবজেক্টের 'age' ভ্যারিয়েবলে রাখা হচ্ছে।
       this-> age = s.age;               // remember this.
    }    

};

int main()
{
    // ১. এখানে সাধারণ কনস্ট্রাক্টরটি কল হবে এবং s1 অবজেক্টের age হবে 20.
    Student s1(25);

    // ২. এখানে কপি কনস্ট্রাক্টরটি কল হবে। s1-এর সমস্ত ডেটা s2-তে কপি হয়ে যাবে।
    Student s2(s1);                // or s2=s1; no problem.                      

    // ৩. কনসোলে s1 এবং s2 উভয়ের বয়স প্রিন্ট করা হচ্ছে (উভয় ক্ষেত্রেই 20 দেখাবে)।
    cout << "Age of student 1: " << s1.age << endl;
    cout << "Age of student 2: " << s2.age << endl;

    return 0; // মেইন ফাংশনের সফল সমাপ্তি
}