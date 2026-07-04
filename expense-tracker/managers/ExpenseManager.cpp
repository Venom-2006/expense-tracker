#include <iostream>
#include "ExpenseManager.h"

using namespace std;

void ExpenseManager::addExpense() {

    int id;
    string title, category, date;
    double amount;

    cout << "Enter ID: ";
    cin >> id;

    cout << "Enter Title: ";
    cin >> title;

    cout << "Enter Category: ";
    cin >> category;

    cout << "Enter Amount: ";
    cin >> amount;

    cout << "Enter Date: ";
    cin >> date;

    expenses.push_back(Expense(id, title, category, amount, date));

    cout << "Expense added successfully\n";
}

void ExpenseManager::viewExpenses() {

    if (expenses.empty()) {
        cout << "No expenses recorded\n";
        return;
    }

    for (auto &e : expenses) {

        cout << "\nID: " << e.id
             << "\nTitle: " << e.title
             << "\nCategory: " << e.category
             << "\nAmount: " << e.amount
             << "\nDate: " << e.date << endl;
    }
}

void ExpenseManager::deleteExpense(int id) {

    for (int i = 0; i < expenses.size(); i++) {

        if (expenses[i].id == id) {

            expenses.erase(expenses.begin() + i);
            cout << "Expense deleted\n";
            return;
        }
    }

    cout << "Expense not found\n";
}

void ExpenseManager::showTotal() {

    double total = 0;

    for (auto &e : expenses)
        total += e.amount;

    cout << "Total Expense: " << total << endl;
}