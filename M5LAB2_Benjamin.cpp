// CSC 134
// M5LAB2
// N'Ky Benjamin
// 11/8/2024

#include <iostream>
using namespace std;


double getLength();
double getWidth();
double getArea(double length, double width);
void displayData(double length, double width, double area);

int main()
{
	
	
   double length,    // The rectangle's length
          width,     // The rectangle's width
          area;      // The rectangle's area
          
   // Get the rectangle's length.
   length = getLength();
   
   // Get the rectangle's width.
   width = getWidth();
   
   // Get the rectangle's area.
   area = getArea(length, width);
   
   // Display the rectangle's data.
   displayData(length, width, area);
          
   return 0;
}

double getLength() {
    cout << "What is your length?" << endl;
    double numb;
    cin >> numb;
    return numb;
}

double getWidth() {
    cout << "What is your width?" << endl;
    double numb2;
    cin >> numb2;
    return numb2;
}

double getArea(double length, double width) {
    return length * width;
}

void displayData(double length, double width, double area) {
    cout << "The length is " << length << endl;
    cout << "The width is " << width << endl;
    cout << "The area is " << area << endl;
}
