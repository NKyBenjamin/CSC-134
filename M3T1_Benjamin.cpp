// CSC 134
// M3T1
// N'Ky Benjamin
// 09/18/2024

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double length;
    double width;
    double area;

    cout << "Enter the length and width of the rectangle, but separate them with a space: " << endl;
    cin >> length >> width;
    
    area = length * width;

    cout << "The area of the rectangle is " << area << "!";
    return 0;
}