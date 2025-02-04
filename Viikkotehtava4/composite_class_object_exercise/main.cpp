#include <iostream>
#include <bankAccount.h>
#include <creditAccount.h>
#include <customer.h>

using namespace std;

int main()
{
    Customer customer1("Patrick", 1000);
    customer1.showBalance();
    cout << endl;
    customer1.deposit(346);
    customer1.creditWithdraw(728);
    customer1.showBalance();
    cout << endl;
    Customer customer2("Alice", 1000);
    customer2.showBalance();
    cout << endl;
    customer2.deposit(100);
    customer2.showBalance();
    cout << endl;
    cout << "Customer: " << customer1.getName() << endl;
    customer1.showBalance();
    cout << "Customer " << customer1.getName()
         << " transfers 150 for " << customer2.getName() << endl;
    customer1.bankTransfer(150, customer2);
    cout << endl;
    cout << "Customer: " << customer1.getName() << endl;
    customer1.creditWithdraw(500);
    customer1.showBalance();
    customer1.creditPayment(60);
    customer1.showBalance();
    cout << endl;

    return 0;
}
