#include<iostream>
#include<string>
using namespace std;

class student{
    public:
    string name;
    double* cgpaptr;  // dynamic memory-র এড্রেস রাখার জন্য পয়েন্টার ভেরিয়েবল

// প্যারামিটারাইজড কনস্ট্রাক্টর (Parameterized Constructor)
student(string name, double cgpa)
{
    this->name = name;
    cgpaptr = new double; // হিপ মেমরিতে (Heap Memory) নতুন জায়গা তৈরি করা
    *cgpaptr = cgpa;      // নতুন তৈরি হওয়া জায়গায় cgpa-এর মানটি বসানো
}

// ডিপ কপি কনস্ট্রাক্টর (Deep Copy Constructor)
student(const student &obj)
{
    this->name = obj.name;       // নাম সরাসরি কপি করা হচ্ছে
    this->cgpaptr = new double;  // ডিপ কপি: নতুন অবজেক্টের জন্য হিপ মেমরিতে সম্পূর্ণ আলাদা জায়গা তৈরি
    *(cgpaptr) = *obj.cgpaptr;   // মূল অবজেক্টের মেমরির মানটি নতুন মেমরি লোকেশনে কপি করা হলো
}

// ডিস্ট্রাক্টর (Destructor) - মেমরি লিক বাচানোর জন্য
~student()
{
    delete cgpaptr; // new দিয়ে তৈরি করা ডাইনামিক মেমরি অবজেক্ট ধ্বংস হওয়ার সময় ডিলিট করে দেওয়া হলো
}

// তথ্য দেখানোর ফাংশন
void getinfo()
{
    cout << "Name: " << name << " , " << "CGPA: " << *cgpaptr << endl;
}

};

int main()
{
    // s1 অবজেক্ট তৈরি করা হলো
    student s1("Anindya Kumar", 8.54);
    s1.getinfo(); 
    
    // s1 থেকে s2 অবজেক্ট তৈরি করা হচ্ছে (ডিপ কপি কনস্ট্রাক্টর কল হবে)
    student s2(s1);
    s2.getinfo(); 
    
    // s2-এর CGPA পরিবর্তন করা হলো
    *(s2.cgpaptr) = 8.88;
    
    // ডিপ কপির কারণে s2 পরিবর্তন হলেও s1-এর ওপর কোনো প্রভাব পড়বে না
    s2.getinfo(); // আউটপুট: 8.88
    s1.getinfo(); // আউটপুট: 8.54
    
    return 0;
} // main ফাংশন শেষ হওয়ার সাথে সাথে s1 ও s2 অবজেক্ট ধ্বংস হবে এবং ডিস্ট্রাক্টর স্বয়ংক্রিয়ভাবে মেমরি ফ্রি করে দেবে।