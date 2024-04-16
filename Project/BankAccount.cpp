// Bank Account Inheritance:
// Problem Statement: Design a system for managing bank accounts. Create a base class BankAccount with attributes like account number and balance. Derive classes like SavingsAccount and CheckingAccount, each with specialized methods like withdraw() and calculate_interest().

#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
protected:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNum, double bal) : accountNumber(accNum), balance(bal) {}

    virtual void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal of $" << amount << " successful." << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }

    virtual void displayBalance()
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
    }

    virtual void calculateInterest() = 0; // Pure virtual function
};

class SavingsAccount : public BankAccount
{
private:
    double interestRate;

public:
    SavingsAccount(string accNum, double bal, double intRate)
        : BankAccount(accNum, bal)
    {
        this->interestRate = interestRate;
    }

    void calculateInterest()
    {
        double interest = balance * interestRate / 100;
        balance += interest;
        cout << "Interest calculated. Updated balance: $" << balance << endl;
    }
};

class CheckingAccount : public BankAccount
{
private:
    double transactionFee;

public:
    CheckingAccount(string accNum, double bal, double fee)
        : BankAccount(accNum, bal)
    {
        this->transactionFee = transactionFee;
    }

    void withdraw(double amount)
    {
        double totalAmount = amount + transactionFee;
        if (totalAmount <= balance)
        {
            balance -= totalAmount;
            cout << "Withdrawal of $" << amount << " successful. Transaction fee: $" << transactionFee << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }

    void calculateInterest()
    {
        cout << "Checking accounts do not earn interest." << endl;
    }
};

int main()
{
    SavingsAccount savings("12345", 5000, 5);
    CheckingAccount checking("67890", 3000, 1);

    cout << "Initial Savings Account Details:" << endl;
    savings.displayBalance();
    savings.calculateInterest();
    savings.displayBalance();
    savings.withdraw(1000);
    savings.displayBalance();

    cout << endl;

    cout << "Initial Checking Account Details:" << endl;
    checking.displayBalance();
    checking.calculateInterest();
    checking.displayBalance();
    checking.withdraw(1000);
    checking.displayBalance();

    return 0;
}
