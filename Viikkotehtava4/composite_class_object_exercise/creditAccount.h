#ifndef CREDITACCOUNT_H
#define CREDITACCOUNT_H
#include <iostream>
#include <bankAccount.h>
using namespace std;

class CreditAccount : public BankAccount
{
public:
    CreditAccount();
    ~CreditAccount();
    CreditAccount(string, double);
    virtual bool deposit(double) override;
    virtual bool withdraw(double) override;
protected:
    double creditLimit = 0;
};

#endif // CREDITACCOUNT_H
