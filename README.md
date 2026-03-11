# C++ Expense Tracker

A simple **command-line Expense Tracker** built using **C++ and Object-Oriented Programming (OOP)**.
This project allows users to manage their expenses directly from the terminal.

---

## Features

* Add a new expense
* View all expenses
* Delete an expense
* Calculate total expenses
* Simple menu-driven CLI interface
* Modular project structure

---

## Project Structure

```
expense-tracker
│
├── main.cpp
│
├── models
│   ├── Expense.h
│   └── Expense.cpp
│
├── managers
│   ├── ExpenseManager.h
│   └── ExpenseManager.cpp
│
└── utils
    ├── Menu.h
    └── Menu.cpp
```

---

## Technologies Used

* C++
* STL (`vector`)
* Object-Oriented Programming
* Modular multi-file architecture

---

## How to Compile

Run the following command inside the project folder:

```
g++ main.cpp models/Expense.cpp managers/ExpenseManager.cpp utils/Menu.cpp -o tracker
```

---

## How to Run

On Windows:

```
tracker.exe
```

On Linux / Mac:

```
./tracker
```

---

## Example Menu

```
===== Expense Tracker =====
1 Add Expense
2 View Expenses
3 Delete Expense
4 Show Total Expense
5 Exit
Enter Choice:
```

---

## Learning Objectives

This project demonstrates:

* Basic **Object-Oriented Programming in C++**
* **Multi-file project structure**
* Use of **STL containers**
* Building **CLI-based applications**

---

## Future Improvements

Possible upgrades for this project:

* Search expenses
* Category-based analytics
* File storage for persistent data
* Sorting expenses
* Graphical interface

---



