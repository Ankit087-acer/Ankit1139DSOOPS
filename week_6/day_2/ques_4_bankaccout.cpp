#include <iostream>
using namespace std;

class BankAccount {
    int balance;
public:
    BankAccount(int balance) {
        this->balance = balance;
    }

    void deposit(int amount) {
        balance += amount;
        cout << "Deposited. New Balance: " << balance << endl;
    }

    void withdraw(int amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn. New Balance: " << balance << endl;
        } else {
            cout << "Insufficient balance." << endl;
        }
    }

    void setBalance(int balance) {
        this->balance = balance;
    }

    int getBalance() {
        return balance;
    }
};

int main() {
    BankAccount b1(23000);
    b1.deposit(1000);
    b1.withdraw(2000);
    cout << "Final Balance: " << b1.getBalance() << endl;
    return 0;
}
