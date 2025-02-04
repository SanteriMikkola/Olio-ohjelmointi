#include "creditAccount.h"
#include <iostream>
using namespace std;

CreditAccount::CreditAccount(){}

CreditAccount::~CreditAccount(){}

CreditAccount::CreditAccount(string name, double creditLimit){
    owner = name;
    this->creditLimit = creditLimit;
    balance = creditLimit;
    cout << "Credit account created for " << name << ", credit limit " << creditLimit << endl;
}

bool CreditAccount::deposit(double money)
{
    if (money > 0){
        balance += money;
        cout << "Credit account: deposit " << money << " done" << endl;
        return true;
    }
    else{
        cout << "Credit account: deposit failed" << endl;
        return false;
    }
}

bool CreditAccount::withdraw(double money)
{
    if (money > 0 && 0 <= creditLimit - money){
        creditLimit -= money;
        balance -= money;
        cout << "Credit account: withdraw " << money
             << " done, credit remaining " << creditLimit << endl;
        return true;
    }
    else{
        cout << "Credit account: withdraw failed" << endl;
        return false;
    }
}

