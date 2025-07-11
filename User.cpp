#include "User.h"
#include <iostream>
using namespace std;

User::User() : username(""), password("") {} // Default contstructor
User::User(string uname, string pwd) : username(uname), password(pwd) {}

string User::getUsername() { return username; }
string User::getPassword() { return password; }

void User::display() {
    cout << "Username: " << username << endl;
}
