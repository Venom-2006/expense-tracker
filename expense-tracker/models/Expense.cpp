#include "Expense.h"

Expense::Expense(int id, std::string title, std::string category, double amount, std::string date) {
    this->id = id;
    this->title = title;
    this->category = category;
    this->amount = amount;
    this->date = date;
}