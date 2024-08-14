#include <iostream>
using namespace std;
// Global variable for initial balance
int balance = 3000;
int pin = 1234;
// Function to display menu and get user choice
int menu() {
    int choice;
    std::cout << "\n===== Banking Application Menu =====\n";
    std::cout << "1. Deposit\n";
    std::cout << "2. Withdraw\n";
    std::cout << "3. Check Balance\n";
    std::cout << "4. Exit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;
    return choice;
}

// Function to perform deposit operation
void deposit() {
    int amount;
    std::cout << "Enter amount to deposit: ";
    std::cin >> amount;
    if(balance >= 10000){
        cout<<"deposite not possible";
    }
    else
    {
         if (amount > 0) {
        balance += amount;
        std::cout << "Deposit successful. New balance: " << balance << std::endl;
    } else {
        std::cout << "Invalid amount. Deposit failed." << std::endl;
    }
    }
   
}

// Function to perform withdraw operation
void withdraw() {
    
    int amount;
    int pin1;
    cout<<"enter your pin";
    cin>>pin1;
    if(pin1==pin)
    {
    std::cout << "Enter amount to withdraw: ";
    std::cin >> amount;
    if (amount > 0) {
        if (balance - amount >= 500) {
            balance -= amount;
            std::cout << "Withdrawal successful. New balance: " << balance << std::endl;
        } else {
            std::cout << "Insufficient balance. Withdrawal failed." << std::endl;
        }
    } else {
        std::cout << "Invalid amount. Withdrawal failed." << std::endl;
    }
}

else
{
    cout<<"invalid pin Try Again";
}
}

// Function to check and display current balance
void checkBalance() {
    std::cout << "Current balance: " << balance << std::endl;
}

int main() {
    int choice;

    do {
        choice = menu();

        switch (choice) {
            case 1:
                deposit();
                break;
            case 2:
                withdraw();
                break;
            case 3:
                checkBalance();
                break;
            case 4:
                std::cout << "Exiting program. Thank you!" << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please enter a valid option." << std::endl;
                break;
        }
    } while (choice != 4);

    return 0;
}
