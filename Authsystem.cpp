#include "AuthSystem.h"
#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

AuthSystem::AuthSystem() {
    users = new User[100];
    userCount = 0;
    loadUsersFromFile();
    sortUsers();
}

AuthSystem::~AuthSystem() {
    saveUsersToFile();
    delete[] users;
} // Destructor

void AuthSystem::loadUsersFromFile() {
    ifstream infile("users.txt");
    string uname, pwd;
    while (infile >> uname >> pwd) {
        users[userCount++] = User(uname, pwd);
    }
    infile.close();
}

void AuthSystem::saveUsersToFile() {
    ofstream outfile("users.txt");
    for (int i = 0; i < userCount; ++i) {
        outfile << users[i].getUsername() << " " << users[i].getPassword() << endl;
    }
    outfile.close();
}

void AuthSystem::sortUsers() {
    sort(users, users + userCount, [](User a, User b) {
        return a.getUsername() < b.getUsername();
    });
}

int AuthSystem::binarySearch(const string& username) { //Binary search implementation to search through users.
    int low = 0, high = userCount - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (users[mid].getUsername() == username) return mid;
        else if (users[mid].getUsername() < username) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

void AuthSystem::registerUser(string uname, string pwd) {
    if (binarySearch(uname) != -1) {
        cout << "Username already exists.\n";
        return;
    }
    users[userCount++] = User(uname, pwd);
    sortUsers();
    cout << "User registered successfully.\n";
}

bool AuthSystem::login(string uname, string pwd) {
    int idx = binarySearch(uname);
    if (idx == -1) return false;
    return users[idx].getPassword() == pwd;
}

void AuthSystem::displayUsers() {
    for (int i = 0; i < userCount; ++i) {
        users[i].display();
    }
}
