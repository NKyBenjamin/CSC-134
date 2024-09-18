// CSC 134
// M2LAB1
// N'Ky Benjamin
// 9/12/2024

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()

{
    // State the constant variables
    const double COST_PER_CUBIC = 0.23;
    const double CHARGE_PER_CUBIC = 0.5;

    //Assigning variables before asking the user
    double length;
    double width;
    double height;
    double volume;
    double cost;
    double charge;
    double profit;

    //Asking the user questions
    cout << "What is the length in feet?: ";
    cin >> length;
    cout << "What is the width in feet?: ";
    cin >> width;
    cout << "What is the height in feet?: ";
    cin >> height;
    cout << fixed << setprecision(2) << showpoint;

    //Calculate the results
    volume = length * width * height;
    cost = COST_PER_CUBIC * volume;
    charge = CHARGE_PER_CUBIC * volume;
    profit = charge - cost;

    //Display the results!
    cout << "Hello! The volume of the crate is " << volume << " cubic feet!" << endl;
    cout << "The cost to build is $" << cost << endl;
    cout << "The charge to the customer is $" << charge << endl;
    cout << "Therefore, the profit comes out at $" << profit << "!" << endl;
    return 0;

}