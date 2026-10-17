#include<iostream>
using namespace std;

class Account{
private:
double balance=0;
string password;
public:

void deposit(double amount)
{
balance+=amount;
}

double getBalance()
{
    return balance;
}
void cashOut(double amount)
{
    balance-=amount;
}

};


int main()
{
Account x;
int choice;
double amount;

do
{
cout<<"......Bank Menu........\n";
cout<<"1.Deposit\n";
cout<<"2.Check Balance\n";
cout<<"3.Cash out\n";
cout<<"4.Exit\n";
cout<<"Enter your choice:";
cin>>choice;
switch(choice)
{
    case 1:
    cout<<"Enter amount:";
    cin>>amount;
    if(amount>0)
    {
        x.deposit(amount);
        cout<<amount<<" deposited successfully!"<<endl;
    }
    else{
        cout<<"Invalid amount!"<<endl;
    }
    break;
    case 2:
    {
    cout<<"Your balance is:"<<x.getBalance()<<endl;
    }
    break;
    case 3:{
    cout<<"Enter cash out amount:";
    cin>>amount;
    if(amount>0 && amount<=x.getBalance())
    {
        x.cashOut(amount);
        cout<<amount<<" cash out successfully!"<<endl;
    }
    else{
        cout<<"Invalid amount!"<<endl;
    }
    }
    break;
    case 4:
    {
        cout<<"Thanks for using our bank!"<<endl;
    }
    break;
    default:
    cout<<"Invalid choice!"<<endl;
}

}
while(choice!=4);

}