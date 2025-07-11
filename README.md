# 🔐 User Authentication System (C++ Midterm Project)

## 📘 Overview

This project is a simple **User Authentication System** built in **C++** for a midterm assignment. It demonstrates key programming concepts such as:

- Pointers and arrays
- Classes and object-oriented design
- File I/O using `.txt` files
- Binary search algorithm
- Strings and data types

The system allows users to register with a username and password, store credentials in a file, and later login by validating them.

---

## 📁 Project Structure

UserAuthProject/

├── main.cpp

├── User.h

├── User.cpp

├── AuthSystem.h

├── AuthSystem.cpp

├── users.txt # Stores registered usernames and passwords

└── README.md


---

## ✅ Features

- ✔️ Register new users
- ✔️ Login existing users
- ✔️ Save/load user data from `users.txt`
- ✔️ Search for users using **binary search**
- ✔️ Two classes: `User` and `AuthSystem` with meaningful interaction
- ✔️ Uses dynamic memory and pointers

---

## 🧠 Concepts Demonstrated

| Concept              | Where Used                                 |
|----------------------|---------------------------------------------|
| Data types/sizes     | `int`, `string`, `sizeof` usage             |
| File types           | `users.txt` for storing data                |
| Pointers             | `User* users` dynamically allocated array   |
| Arrays               | Array of users stored as `User* users`      |
| Binary Search        | Used to find users during login             |
| Strings              | `std::string` used for usernames/passwords  |
| File I/O             | `ifstream` and `ofstream` in `AuthSystem`   |
| Classes              | `User` and `AuthSystem`                     |

---

## 🛠️ How to Compile

Make sure you have a C++ compiler installed (e.g., `g++`). Then run:

```bash
g++ main.cpp User.cpp AuthSystem.cpp -o authApp
```

## Things to add
I was thinking about adding a JSON/XML file instead of a text document for easy grepping aswell as adding a hashing algorithm for the passwords so they aren't stored in plaintext
