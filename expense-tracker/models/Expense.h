#ifndef EXPENSE_H
#define EXPENSE_H

#include <string>

class Expense {
public:
    int id;
    std::string title;
    std::string category;
    double amount;
    std::string date;

    Expense(int id, std::string title, std::string category, double amount, std::string date);
};

#endif