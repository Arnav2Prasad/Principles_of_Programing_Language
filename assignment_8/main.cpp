#include <iostream>
#include <stdexcept>
using namespace std;

class BankAccount {
private:
    float balance;

public:
    BankAccount(float initialBalance) : balance(initialBalance) {}

    void deposit(float amount) {
        if (amount <= 0) {
            throw invalid_argument("Invalid deposit amount. Amount must be greater than zero.");
        }

        balance += amount;
        cout << "Deposit successful. New balance: " << balance << std::endl;
    }

    void withdraw(float amount) {
        if (amount <= 0) {
            throw invalid_argument("Invalid withdrawal amount. Amount must be greater than zero.");
        }

        if (amount > balance) {
            throw runtime_error("Insufficient funds. Withdrawal not allowed.");
        }

        balance -= amount;
        cout << "Withdrawal successful. New balance: " << balance << std::endl;
    }

    void checkBalance() {
        cout << "Current balance: " << balance << std::endl;
    }
};

int main() {
    try {
        BankAccount account(1000);

        account.deposit(500);

        account.withdraw(200);

        account.checkBalance();

        account.withdraw(-50);
    } catch (const invalid_argument& e) {
        cerr << "Error: " << e.what() << std::endl;
    } catch (const runtime_error& e) {
        cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}

