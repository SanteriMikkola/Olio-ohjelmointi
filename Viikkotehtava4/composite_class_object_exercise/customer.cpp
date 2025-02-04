#include "customer.h"
#include <iostream>
#include <bankAccount.h>
#include <creditAccount.h>
using namespace std;

Customer::Customer() {}

Customer::~Customer(){}

Customer::Customer(string name, double creditLimit)
    : depitAccount(name), creditAccount(name, creditLimit)
{
    this->name = name;
    cout << "Customer relationship created for " << name << endl;
}

string Customer::getName()
{
    return name;
}

void Customer::showBalance()
{
    cout << "Bank account balance: " << depitAccount.getBalance() << endl;
    cout << "Credit account balance: " << creditAccount.getBalance() << endl;
}

bool Customer::deposit(double money)
{
    bool succeed = depitAccount.deposit(money);
    if (succeed)
        return true;
    else
        return false;
}

bool Customer::withdraw(double money)
{
    bool succeed = depitAccount.withdraw(money);
    if (succeed)
        return true;
    else
        return false;
}

bool Customer::creditPayment(double money)
{
    bool succeed = creditAccount.deposit(money);
    if (succeed)
        return true;
    else
        return false;
}

bool Customer::creditWithdraw(double money)
{
    bool succeed = creditAccount.withdraw(money);
    if (succeed)
        return true;
    else
        return false;
}

bool Customer::bankTransfer(double money, Customer &customer)
{
    cout << getName() << " | ";
    bool succeed1 = depitAccount.withdraw(money);
    if (succeed1){
        cout << customer.getName() << " | ";
        bool succeed2 = customer.deposit(money);
        if (succeed2){
            return true;
        }
        else{
            return false;
        }
    }
    else{
        return false;
    }
}
