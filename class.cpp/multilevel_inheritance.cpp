#include <iostream>
#include <string>
using namespace std;

class Account {
protected:
    string holderName;
    int accountNo;
public:
    void setAccountDetails() {
        cout << "Enter Account Holder Name: ";
        getline(cin, holderName);
        cout << "Enter Account Number: ";
        cin >> accountNo;
        cin.ignore();  
    }
};

class Bank : public Account {
protected:
    double balance;
public:
    void setBalance() {
        cout << "Enter Initial Balance: ";
        cin >> balance;
        cin.ignore();
    }
};

class BankOperations : public Bank {
public:
    void deposit(double amount) {
        if(amount > 0) {
            balance += amount;
            cout << "Amount deposited successfully." << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if(amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully." << endl;
        } else {
            cout << "Insufficient balance or invalid amount." << endl;
        }
    }

    void display() {
        cout << "\nAccount Details:" << endl;
        cout << "Holder Name: " << holderName << endl;
        cout << "Account Number: " << accountNo << endl;
        cout << "Balance: $" << balance << endl;
    }
};

int main() {
    BankOperations user;

    user.setAccountDetails();
    user.setBalance();

    user.display();

    cout << "\nDepositing $500..." << endl;
    user.deposit(500);

    cout << "Withdrawing $200..." << endl;
    user.withdraw(200);

    user.display();

    return 0;
}
