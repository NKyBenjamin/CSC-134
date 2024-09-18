// CSC 134
// M2HW1 - Gold
// N'Ky Benjamin
// 09/16/2024

#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    string name;
    double accountBalance;
    double depositAmount;
    double withdrawalAmount;
    const int ACCOUNT_NUMBER = 1234567890;
    double finalAccountBalance;
   
    cout << fixed << setprecision(2);
    cout << "Question 1" << endl;
    cout << "What is your name?: ";
    getline(cin, name);
    cout << "What is your starting balance?: $";
    cin >> accountBalance;
    cout << "What is your desired deposit amount?: $";
    cin >> depositAmount;
    cout << "What is your desired withdrawal amount?: $";
    cin >> withdrawalAmount;

    finalAccountBalance = accountBalance + depositAmount - withdrawalAmount;

    cout << "Account Name: " << name << endl;
    cout << "Account Number: " << ACCOUNT_NUMBER << endl;
    cout << "Your final account balance now is: $" << finalAccountBalance;

    return 0;

}