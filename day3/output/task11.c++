#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    string name = "Pradip";
    int AccNo = 463737662;
    int balance = 50000;
    int pin = 3201;

    bool verifyPin(int enteredPin) {
        return enteredPin == pin;
    }

    void withdraw(int money) {
        if (money > balance) {
            cout << "Insufficient balance." << endl;
        } else {
            balance -= money;
            cout << "Withdrawal of Rs " << money << " successful. Current balance: Rs " << balance << endl;
        }
    }

    void transfer(int amount) {
        if (amount > balance) {
            cout << "Insufficient balance." << endl;
        } else {
            balance -= amount;
            cout << "Transfer of Rs " << amount << " successful. Current balance: Rs " << balance << endl;
        }
    }

    void checkBalance() {
        cout << "Current balance: Rs " << balance << endl;
    }

public:
    void start() {
        int choice;
        int enteredPin;

        cout << "Enter your PIN: ";
        cin >> enteredPin;

        if (verifyPin(enteredPin)) {
            do {
                cout << "\n1 for Withdraw\n2 for Transfer\n3 for Check Balance\n4 to Exit\n";
                cout << "Enter choice: ";
                cin >> choice;

                switch (choice) {
                    case 1:
                        int withdrawAmount;
                        cout << "Enter amount to withdraw: ";
                        cin >> withdrawAmount;
                        withdraw(withdrawAmount);
                        break;
                    case 2:
                        int transferAmount;
                        cout << "Enter amount to transfer: ";
                        cin >> transferAmount;
                        transfer(transferAmount);
                        break;
                    case 3:
                        checkBalance();
                        break;
                    case 4:
                        cout << "Exiting...\n";
                        break;
                    default:
                        cout << "Invalid choice. Please try again.\n";
                }
            } while (choice != 4);
        } else {
            cout << "Invalid PIN. Access denied.\n";
        }
    }
};

int main() {
    Account myAccount;
    myAccount.start();
    return 0;
}