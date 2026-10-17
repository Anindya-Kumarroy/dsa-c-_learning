#include<iostream>
using namespace std;

// encapsulation: Data (variables) এবং Methods (functions)-কে একটি একক ইউনিট বা Class-এর মধ্যে অবদ্ধ করাই হলো এনক্যাপসুলেশন।
class BankAccount
{
private:
    // 1. Data Hiding (डेटा छुपाना): গুরুত্বপূর্ণ ডাটা সরাসরি অ্যাক্সেস থেকে রক্ষা করার জন্য private করা হয়েছে।
    // মেইন ফাংশন থেকে সরাসরি account.balance বা account.password লিখে একে অ্যাক্সেস বা পরিবর্তন করা যাবে না।
    double balance = 0;
    string password;

public:
    // 2. Controlled Access (Getter/Setter Methods): private ডাটাকে অ্যাক্সেস বা মডিফাই করার একমাত্র মাধ্যম এই public ফাংশনগুলো।
    
    // Setter Function with Validation: সরাসরি balance পরিবর্তন করতে না দিয়ে, ফাংশনের মাধ্যমে ইনপুট চেক (Validation) করে তবেই balance আপডেট করা হচ্ছে।
    void deposit(double amount)
    {
        if(amount > 0)
        {
            balance += amount; // বৈধ অ্যামাউন্ট হলেই কেবল ব্যালেন্স বাড়বে
            cout << amount << " taka deposited successfully." << endl;
        }
        else
        {
            cout << amount << " is a wrong amount!" << endl;
        }
    }

    // Getter Function: private ভেরিয়েবল 'balance'-এর মান মেইন ফাংশনে নিরাপদে দেখার জন্য এই ফাংশনটি ব্যবহার করা হয়েছে (Read-Only Access)।
    double getBalance()
    {
        return balance;
    }
};

int main()
{
    // Object Creation: BankAccount ক্লাসের একটি অবজেক্ট তৈরি করা হলো, যা নিজের ভেতরে তার ডাটা ও মেথডকে এনক্যাপসুলেট করে রেখেছে।
    BankAccount account;
    int choice;
    double amount;

    do {
        cout << "............Bank menu.........." << endl;
        cout << "1.Deposit" << endl;
        cout << "2.Check Balance" << endl;
        cout << "3.Exit" << endl;

        cout << "Enter your choice:" << endl;
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                // সরাসরি ব্যালেন্স পরিবর্তন না করে public মেথডের মাধ্যমে নিরাপদে ডেপোজিট করা হচ্ছে
                account.deposit(amount); 
                break;
            case 2:
                // সরাসরি account.balance প্রিন্ট করা যাবে না (Error দেবে)। তাই getBalance() মেথড ব্যবহার করা হয়েছে।
                cout << "Your current balance is : " << account.getBalance() << " taka" << endl;
                break;
            case 3:
                cout << "Thanks for using our bank!." << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }

    } while(choice != 3);

    return 0;
}