#include <iostream>
using namespace std;

class ABC {
public:
    // কনস্ট্রাক্টর: অবজেক্ট মেমোরিতে তৈরি হলে এটি প্রিন্ট হবে
    ABC() {
        cout << "constructor\n";
    }

    // ডেস্ট্রাক্টর: অবজেক্ট মেমোরি থেকে মুছে গেলে এটি প্রিন্ট হবে
    ~ABC() {
        cout << "destructor\n";
    }
};

int main() {
    // একটি if ব্লক তৈরি করা হলো
    if(true) {
        // static অবজেক্ট তৈরি করা হলো:
        // এটি if ব্লকের ভেতরে থাকা সত্ত্বেও if ব্লক শেষ হলে ধ্বংস হবে না।
        static ABC obj;
    } // <- এখানে if ব্লক শেষ হলেও static-এর কারণে destructor কল হবে না!

    // main() ফাংশনের মেসেজ প্রিন্ট হবে
    cout << "end of main fnx\n";
    
    // main() অর্থাৎ পুরো প্রোগ্রাম শেষ হতে চলেছে।
    // প্রোগ্রাম শেষ হওয়ার একদম শেষ মুহূর্তে static obj-এর জন্য destructor কল হবে।
    return 0;
}