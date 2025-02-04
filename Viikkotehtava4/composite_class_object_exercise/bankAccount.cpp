#include "bankAccount.h"

BankAccount::BankAccount() {}

BankAccount::~BankAccount(){}

BankAccount::BankAccount(string name)
{
    owner = name;
    cout << "Bank account created for " << name << endl;
}

double BankAccount::getBalance()
{
    return balance;
}

bool BankAccount::deposit(double money)
{
    if (money > 0){
        balance += money;
        cout << "Bank account: deposit " << money << " done" << endl;
        return true;
    }
    else{
        cout << "Bank account: deposit failed" << endl;
        return false;
    }
}

bool BankAccount::withdraw(double money)
{
    if (money > 0 && balance >= money){
        balance -= money;
        cout << "Bank account: withdraw " << money << " done" << endl;
        return true;
    }
    else{
        cout << "Bank account: withdraw failed" << endl;
        return false;
    }
}
