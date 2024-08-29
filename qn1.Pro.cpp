#include <iostream>
using namespace std;

int main() {
    string userId, password, storedId, storedPassword;
    double balance = 0.0;

    while (true) {
        cout << "Hi! Welcome to the ATM Machine!" << endl;
        cout << "Please select an option from the menu below:" << endl;
        cout << "l -> Login" << endl;
        cout << "c -> Create New Account" << endl;
        cout << "q -> Quit" << endl;
        char choice;
        cin >> choice;

        if (choice == 'c') {
            cout << "Please enter your user name: ";
            cin >> storedId;
            cout << "Please enter your password: ";
            cin >> storedPassword;
            cout << "Thank You! Your account has been created!" << endl;
        }
        else if (choice == 'l') {
            cout << "Please enter your user id: ";
            cin >> userId;
            cout << "Please enter your password: ";
            cin >> password;
            if (userId == storedId && password == storedPassword) {
                cout << "Access Granted!" << endl;
                while (true) {
                    cout << "d -> Deposit Money" << endl;
                    cout << "w -> Withdraw Money" << endl;
                    cout << "r -> Request Balance" << endl;
                    cout << "q -> Quit" << endl;
                    char option;
                    cin >> option;

                    if (option == 'd') {
                        double amount;
                        cout << "Amount of deposit: $";
                        cin >> amount;
                        balance += amount;
                    }
                    else if (option == 'w') {
                        double amount;
                        cout << "Amount of withdrawal: $";
                        cin >> amount;
                        if (amount > balance) {
                            cout << "Insufficient balance!" << endl;
                        }
                        else {
                            balance -= amount;
                        }
                    }
                    else if (option == 'r') {
                        cout << "Your balance is $" << balance << "." << endl;
                    }
                    else if (option == 'q') {
                        break;
                    }
                }
            }
            else {
                cout << "*** LOGIN FAILED! ***" << endl;
            }
        }
        else if (choice == 'q') {
            break;
        }
    }

    return 0;
}


