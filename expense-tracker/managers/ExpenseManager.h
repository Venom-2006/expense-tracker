#ifndef EXPENSE_MANAGER_H
#define EXPENSE_MANAGER_H

#include <vector>
#include <string>
#include "../models/Expense.h"

class ExpenseManager {
private:
    std::vector<Expense> expenses;

public:
    void addExpense();
    void viewExpenses();
    void deleteExpense(int id);
    void showTotal();
};

#endif