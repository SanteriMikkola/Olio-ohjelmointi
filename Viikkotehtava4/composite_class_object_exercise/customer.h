#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
#include <bankAccount.h>
#include <creditAccount.h>
using namespace std;

class Customer
{
public:
    Customer();
    ~Customer();
    Customer(string, double);
    string getName();
    void showBalance();
    bool deposit(double);
    bool withdraw(double);
    bool creditPayment(double);
    bool creditWithdraw(double);
    bool bankTransfer(double, Customer &);
private:
    string name;
    BankAccount depitAccount;
    CreditAccount creditAccount;
};

#endif // CUSTOMER_H
