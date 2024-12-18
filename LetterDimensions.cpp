// Letter Dimensions Project
// N'Ky Benjamin

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double length = 11;
    double width = 8.5;

    if (length > 0 && width > 0) {
        double mil_length = length * 25.4;
        double mil_width = width * 25.4;
        double diagonal = sqrt(pow(mil_length, 2) + pow(mil_width, 2));

        cout << "The dimension of the letter in inches is " << width << " x " << length << endl;
        cout << "The dimension of the letter in millimeters is " << mil_width << " x " << mil_length << endl; 
        cout << "Its diagonal is " << diagonal << endl;
    }
    return 0;
}