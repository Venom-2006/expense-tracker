# 💸 Expense Tracker (C++)

A simple command-line expense tracker written in C++. Add expenses, view them, delete them by ID, and see your running total — all from a terminal menu.

## Features

- ➕ Add an expense with an ID, title, category, amount, and date
- 📋 View all recorded expenses
- 🗑️ Delete an expense by ID
- 🧮 Show the total of all recorded expenses

## Tech Stack

- C++ (standard library only — `<iostream>`, `<vector>`, `<string>`)
- No external dependencies

## Project Structure

```
expense-tracker/
├── main.cpp                     # Entry point / menu loop
├── managers/
│   ├── ExpenseManager.h
│   └── ExpenseManager.cpp       # Add / view / delete / total logic
├── models/
│   ├── Expense.h
│   └── Expense.cpp              # Expense data model
└── utils/
    ├── Menu.h
    └── Menu.cpp                 # Console menu display
```

## Getting Started

### Prerequisites

- A C++ compiler that supports C++11 or later (e.g. `g++`)

### Build

From the `expense-tracker/` directory:

```bash
g++ main.cpp managers/ExpenseManager.cpp models/Expense.cpp utils/Menu.cpp -o tracker
```

### Run

```bash
./tracker        # on Linux/macOS
tracker.exe      # on Windows
```

## Usage

On launch, you'll see a menu:

```
===== Expense Tracker =====
1 Add Expense
2 View Expenses
3 Delete Expense
4 Show Total Expense
5 Exit
Enter Choice:
```

Pick a number and follow the prompts. Note that expenses only exist for the current session — closing the program clears them, since there's no file or database storage yet (see Known Limitations below).

> **Tip:** When entering a title, category, or date, avoid spaces (e.g. use `Grocery-Store` or `12-Jul-2026`) — the current input handling reads one word at a time and will misread multi-word entries. This is on the roadmap to fix.

## Known Limitations

- **No persistence** — all data is stored in memory and is lost when the program exits.
- **No input validation** — non-numeric input for ID/amount, or multi-word text fields, can cause unexpected behavior.
- **No duplicate-ID checks** — nothing currently stops you from adding two expenses with the same ID.

## Roadmap

- [ ] Read multi-word input correctly (`std::getline`)
- [ ] Validate numeric input and recover gracefully from bad input
- [ ] Persist expenses to a file (CSV or JSON) between sessions
- [ ] Prevent duplicate IDs / negative amounts
- [ ] Add a `Makefile` for easier building
- [ ] Add a `.gitignore` (exclude compiled binaries like `tracker.exe`)

## Contributing

Issues and pull requests are welcome — this is a good project for practicing C++ fundamentals (file I/O, input validation, basic data structures).

## License

No license has been specified for this project yet. Consider adding one (e.g. [MIT](https://choosealicense.com/licenses/mit/)) so others know how they can use this code.
