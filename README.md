📘 Bank Account Management System (C++ Project)

This is a simple Bank Account Management System written in C++.
It demonstrates the use of classes, constructors, string handling, and basic banking operations such as deposit, withdrawal, and displaying account details.

🚀 Features

Create a bank account with:

Account number

Account holder name

Initial balance

Deposit amount

Withdraw amount with validation:

Cannot withdraw more than available balance

Must maintain a minimum balance (₹500 in this code)

Display customer details

📂 Code Overview

The main class in this project is:

bank Class

Data Members

accno – Account number

accholdername – Account holder name

bal – Account balance

Member Functions

deposite() – Add money to the account

withdraw() – Remove money with balance checks

show() – Display complete account details

🧾 Sample Code Snippet
bank b(accnum, name, balll);
b.deposite();
b.withdraw();
b.show();

🛠️ How to Compile and Run
Using g++ (Windows / Linux / Mac)
g++ bank.cpp -o bank
./bank

Using VS Code

Install the C/C++ extension

Create a new file bank.cpp

Paste the code

Run using the built-in terminal

📌 Future Improvements

Add PIN-based authentication

Use std::string instead of char[]

Add menu-driven UI

Store account data in files

Handle multiple accounts

👤 Author

Karthik

Feel free to fork, improve, or submit pull requests!
