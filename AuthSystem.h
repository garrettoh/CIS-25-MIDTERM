#ifndef AUTHSYSTEM_H
#define AUTHSYSTEM_H
#include "User.h"

class AuthSystem {
private:
    User* users;
    int userCount;
    void loadUsersFromFile();
    void saveUsersToFile();
    int binarySearch(const string& username);
    void sortUsers();
public:
    AuthSystem();
    ~AuthSystem();
    void registerUser(string uname, string pwd);
    bool login(string uname, string pwd);
    void displayUsers();
};

#endif
