
//Memory is allocated for object not class.

#include<iostream> // স্ট্যান্ডার্ড ইনপুট-আউটপুট স্ট্রিম লাইব্রেরি যুক্ত করা (যেমন: cout ব্যবহারের জন্য)
using namespace std; // std নেমস্পেস ব্যবহার করা, যাতে বারবার std::cout লিখতে না হয়

class Teacher{ // 'Teacher' নামে একটি ক্লাস তৈরি করা হলো
    private:
    double salary; // private ভ্যারিয়েবল: এটি শুধুমাত্র এই ক্লাসের ভেতর থেকেই অ্যাক্সেস করা যাবে
    
    public:
    string name;   // public ভ্যারিয়েবল: ক্লাসের বাইরে থেকেও এটি অ্যাক্সেস করা যাবে
    string dept;   // public ভ্যারিয়েবল: ডিপার্টমেন্টের নাম রাখার জন্য
    string subject;// public ভ্যারিয়েবল: বিষয়ের নাম রাখার জন্য
    
    // এটি একটি Default Constructor (ডিফল্ট কনস্ট্রাক্টর)
    // ক্লাসের নাম এবং এই ফাংশনের নাম একই, এবং এর কোনো রিটার্ন টাইপ নেই
    Teacher()
    {
        // অবজেক্ট তৈরি হওয়ার সাথে সাথে এই ভ্যারিয়েবলগুলোর মান স্বয়ংক্রিয়ভাবে সেট হয়ে যাবে
        dept = "Computer Science and Engineering."; 
        subject = "C++"; 
    }

}; // ক্লাসের সংজ্ঞা শেষ করার জন্য সেমিকোলন (;) ব্যবহার করা হয়

int main()
{
    // Teacher ক্লাসের 't1' নামে একটি অবজেক্ট তৈরি করা হলো
    // এই লাইনে অবজেক্ট তৈরির সাথে সাথেই উপরে থাকা Teacher() কনস্ট্রাক্টরটি নিজে থেকেই কল হয়ে যাবে
    Teacher t1; 
    
    // কনস্ট্রাক্টরের মাধ্যমে সেট হওয়া dept এবং subject এর মান স্ক্রিনে প্রিন্ট করা হচ্ছে
    cout << "Department : " << t1.dept << endl; 
    cout << "Subject    : " << t1.subject << endl; 

    return 0; // প্রোগ্রামটি সফলভাবে শেষ হয়েছে তা বোঝানোর জন্য
}