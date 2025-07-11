#ifndef USER_H
#define USER_H
#include <string>
using namespace std;

class User {
private:
    string username;
    string password;
public:
    User();
    User(string uname, string pwd);
    string getUsername();
    string getPassword();
    void display();
};

#endif
