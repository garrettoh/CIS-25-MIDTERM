#include "AuthSystem.h"
#include <iostream>
using namespace std;

int main() {
    AuthSystem auth;
    int choice;
    string uname, pwd;

    do {
        cout << "\n1. Register\n2. Login\n3. Display Users\n4. Exit\nEnter choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter username: ";
            cin >> uname;
            cout << "Enter password: ";
            cin >> pwd;
            auth.registerUser(uname, pwd);
            break;
        case 2:
            cout << "Enter username: ";
            cin >> uname;
            cout << "Enter password: ";
            cin >> pwd;
            if (auth.login(uname, pwd)) cout << "Login successful!\n";
            else cout << "Invalid credentials.\n";
            break;
        case 3:
            auth.displayUsers();
            break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}
