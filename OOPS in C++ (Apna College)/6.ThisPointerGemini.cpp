#include<iostream> // input-output (cout) ব্যবহারের জন্য স্ট্যান্ডার্ড হেডার ফাইল
using namespace std; // বারবার std::cout না লিখে সরাসরি cout লেখার জন্য

// BankAccount নামের একটি Class বা ব্লুপ্রিন্ট তৈরি করা হলো
class BankAccount {

private:
    // এটি ক্লাসের নিজস্ব ভেরিয়েবল (Member Variable)
    // এটি কোনো অবজেক্ট নয়, এটি অবজেক্টের ভেতরের একটি তথ্যের ঘর মাত্র
    double balance; 

public:
    // এটি হলো Constructor (অবজেক্ট তৈরি হওয়ার সাথে সাথে এটি অটোমেটিক কল হয়)
    // ব্র্যাকেটের 'double balance' হলো একটি সাময়িক লোকাল ভেরিয়েবল (Parameter)
    BankAccount(double balance) {
       
       this->balance = balance;
       // 'this->balance' হলো ওপরের private মেম্বার ভেরিয়েবলটি
       // আর ডানদিকের শুধু 'balance' হলো কনস্ট্রাক্টরের প্যারামিটারটি (যা মেইন থেকে ১০০০০ পেয়েছে)
       // এই লাইনের মাধ্যমে ১০০০০ মানটি অবজেক্টের নিজস্ব ব্যালেন্সের ঘরে জমা হলো
    }

    // টাকা জমা করার জন্য একটি মেম্বার ফাংশন (Method)
    // ব্র্যাকেটের 'double balance' হলো মেইন থেকে পাঠানো ৫০০০ টাকা গ্রহণ করার প্যারামিটার
    void deposit(double balance)
    {
        this->balance = balance + this->balance;
        // নতুন ব্যালেন্স = মেইন থেকে আসা ৫০০০ (balance) + আগে থেকে জমা থাকা ১০০০০ (this->balance)
        // যোগফল ১৫০০০ টাকা বামপাশের 'this->balance' অর্থাৎ অবজেক্টের নিজস্ব ব্যালেন্সে আপডেট হয়ে গেল
    }

    // ব্যালেন্স স্ক্রিনে দেখানোর জন্য মেম্বার ফাংশন
    void showBalance()
    {
        // 'this->balance' দিয়ে কারেন্ট অবজেক্টের ভেতরের আপডেটেড ব্যালেন্সটা (১৫০০০) প্রিন্ট করা হচ্ছে
        cout << "Your balance is : " << this->balance << endl;
    }

}; // ক্লাসের বডি এখানে শেষ (সেমিকোলন দেওয়া মাস্ট)


int main()
{
    // ১. BankAccount ক্লাসের সাপেক্ষে 'MyAccount' নামের একটি বাস্তব Object তৈরি করা হলো
    // অবজেক্ট তৈরির সময়ই ব্র্যাকেটে ১০০০০ পাঠানো হলো, যা সোজা ওপরে কনস্ট্রাক্টরে চলে যাবে
    BankAccount MyAccount(10000);

    // ২. MyAccount অবজেক্ট দিয়ে deposit ফাংশন কল করে ৫০০০ টাকা পাঠানো হলো
    // এই লাইনে এসে ফাংশনের ভেতরের 'this' পয়েন্টারটি 'MyAccount' এর মেমরি অ্যাড্রেসকে নির্দেশ করছে
    MyAccount.deposit(5000);

    // ৩. ফাইনাল আউটপুট দেখার জন্য ফাংশন কল
    // এটি স্ক্রিনে দেখাবে: "Your balance is : 15000"
    MyAccount.showBalance();

    return 0; // প্রোগ্রামটি সফলভাবে শেষ হয়েছে তা বোঝানোর জন্য
}