// Integer Reader
// N'Ky Benjamin

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double input; // Initiating my value!

    cout << "Give me a number, please: "; // Prompting a user with a question
    cin >> input; // Storing their input into my value

    if (input > 0) { // So if their input is greater than zero, it is a positive number
        cout << "Positive Number!";
    } else if (input < 0) { // So if their input is less than zero, it is a negative number
        cout << "Negative Number!";
    } else { // If it is neither, then the input must be zero itself!
        cout << "Zero!";
    }
    return 0;
}