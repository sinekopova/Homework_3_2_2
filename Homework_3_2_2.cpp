#include <iostream>
#include <windows.h>


struct Account
{
    int number = 0;
    std::string owner = "¬ладелец счета";
    double balance = 0;
};

Account createAccount();
void changeBalance(Account& acc);
void printAccInfo(const Account& acc);

int main()
{
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251);    

    Account acc = createAccount();
    changeBalance(acc);
    printAccInfo(acc);
}

Account createAccount()
{
    Account acc;

    std::cout << "¬ведите номер счЄта : ";
    std::cin >> acc.number;

    std::cout << "¬ведите им€ владельца : ";
    std::cin >> acc.owner;

    std::cout << "¬ведите баланс : ";
    std::cin >> acc.balance;

    return acc;
}

void changeBalance(Account& acc)
{
    double newBalance;
    std::cout << "¬ведите новый баланс : ";
    std::cin >> newBalance;
    acc.balance = newBalance;
}

void printAccInfo(const Account& acc)
{
    std::cout << "¬аш счЄт : " << acc.owner << ", "
        << acc.number << ", " << acc.balance << std::endl;
}
