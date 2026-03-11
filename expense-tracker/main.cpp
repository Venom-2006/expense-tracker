#include <iostream>
#include "managers/ExpenseManager.h"
#include "utils/Menu.h"

using namespace std;

int main() {

    ExpenseManager manager;
    int choice;

    while (true) {

        showMenu();
        cin >> choice;

        if (choice == 1)
            manager.addExpense();

        else if (choice == 2)
            manager.viewExpenses();

        else if (choice == 3) {

            int id;
            cout << "Enter ID to delete: ";
            cin >> id;

            manager.deleteExpense(id);
        }

        else if (choice == 4)
            manager.showTotal();

        else if (choice == 5) {
            cout << "Exiting...\n";
            break;
        }

        else
            cout << "Invalid choice\n";
    }

    return 0;
}