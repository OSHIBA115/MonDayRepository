#pragma once

class BankAccount
{
private:
    std::string accountHolder; // 口座名義人
    double balance;            // 残高

public:

    BankAccount(const string& holder, double initialBalance)
        : accountHolder(holder), balance(initialBalance) {}

    double getBalance() const {
        return balance;//Get関数（残高表示）
    }

    void deposit(double amount) {
        if (amount > 0) {//入力値が０より大きい場合
            balance += amount;
            cout << "Deposited: " << amount << "\n";//その額を入金して表示
        }
        else {//無効な入金がされました。と表示
            cout << "Invalid deposit amount.\n";
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance)//入力値が０より大きく、現在の残高より小さい場合
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << "\n";//その分だけ残高から差し引いて、残高を表示
        }
        else
        {
            cout << "Invalid withdraw amount or insufficient funds.\n";//無効であることを通知
        }
    }

    void displayAccountInfo() const
    {
        cout << "Account Holder: " << accountHolder << "\n"//口座名義人の名前を表示
            << "Current Balance: " << balance << "\n";//現在の残高を表示
    }
};
