#include <iostream>      // Provides input/output functionality like cout

// Account class
class Account {
private:
    double balance;      // Stores the account balance

    // Auditor is declared as a friend class
    // This allows Auditor to access private members of Account
    friend class Auditor;

public:
    // Constructor of Account class
    explicit Account(double initialBalance)
        : balance(initialBalance) {}
};

// Auditor class
class Auditor {
public:
    // Function to inspect an Account object
    void inspect(const Account& account) const {

        // Accesses the private balance member of Account
        // because Auditor is declared as a friend class
        std::cout << "Account Balance: "
                  << account.balance << '\n';
    }
};

// Main function - program execution starts here
int main() {

    // Creates an Account object with an initial balance of 5000
    Account account(5000.0);

    // Creates an Auditor object
    Auditor auditor;

    // Calls inspect() to display the account balance
    auditor.inspect(account);

    return 0;    // Indicates successful program execution
}