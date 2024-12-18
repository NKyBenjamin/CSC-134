// Using Powers Practicing
// N'Ky Benjamin

#include <iostream>
#include <cmath>


using namespace std;

int main() {
    int input;
    cout << "Give me your number: " << endl;
    cin >> input;

    if (input > 0) {
       double square = input * input;
       double cube = input * input * input;
       double fourth_power = pow(input, 4);

        cout << "Your number squared is " << square << endl;
        cout << "Your number cubed is " << cube << endl;
        cout << "Your number to the fourth power is " << fourth_power << endl;
        

    }
    return 0;
}