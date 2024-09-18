// CSC 134
// M2HW1 - Gold
// N'Ky Benjamin
// 09/16/2024

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()

{
    int pizzaAmount;
    int slicesPerPizza;
    int visitors;
    double amountLeft;

    cout << fixed << setprecision(2);
    cout << "Question 3" << endl;
    cout << "How many pizzas do you want to order?: ";
    cin >> pizzaAmount;
    cout << "How many slices per pizza?: ";
    cin >> slicesPerPizza;
    cout << "How many visitors?: ";
    cin >> visitors;

    amountLeft = (pizzaAmount * slicesPerPizza) - (visitors * 3);
    cout << "There are " << amountLeft << " slices left over!" << endl;

    return 0;
}