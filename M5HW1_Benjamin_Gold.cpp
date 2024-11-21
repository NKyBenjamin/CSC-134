// CSC 134
// M5HW1 (Gold)
// N'Ky Benjamin
// 11/14/2024

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

// Declaring the functions for calculating the average rainfall, volume of boxes, geometry calculator, Roman numerals, distance calculator, and our "return to question" question!
void averageRainfall();
bool returnQuestion();
void volumeOfBox();
void romanNumerals();
void geometryCalculator();
void distanceCalculator();

bool returnQuestion() // So that way, we can just go back to the menu!
{
    string answer;
    while (true) 
    {
        cout << "Would you like to return to the menu or quit the program? Enter Y for returning or N to quit: ";
        cin >> answer;

        while (answer != "Y" && answer != "N") {
            cout << "Please input a valid answer: ";
            cin >> answer;
        }

        if (answer == "Y")
        {
            return true;
        }
        else if (answer == "N")
        {
            cout << "Goodbye!";
            return false; // returns false to activate the (!returnQuestion) "if" statement!
        }
    }
}

void averageRainfall() // our function for the average rainfall
{
    // Declaring our variables
    string month1, month2, month3;
    double rainfall1, rainfall2, rainfall3;
    
    // Asking our questions
    cout << "Welcome to Average Rainfall!" << endl;
    cout << "Enter the first month: ";
    cin >> month1;
    cout << "Enter the rainfall for " << month1 << ": ";
    cin >> rainfall1;
    cout << "Enter the second month: ";
    cin >> month2;
    cout << "Enter the rainfall for " << month2 << ": ";
    cin >> rainfall2;
    cout << "Enter the third month: ";
    cin >> month3;
    cout << "Enter the rainfall for " << month3 << ": ";
    cin >> rainfall3;

    // Calculating and displaying our results
    double average = (rainfall1 + rainfall2 + rainfall3) / 3;
    cout << fixed << setprecision(2);
    cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is " << average << " inches." << endl;
        
    
    
}

void volumeOfBox()
{
    // Declaring our variables
    double length, width, height, volume;
    
    // Asking the questions
    cout << "Welcome to Volume of Box!" << endl;
    cout << "Enter your preferred length: ";
    cin >> length;

    while (length <= 0) { // These while statements check our inputs to make sure that the user has a chance to retry their choice if it is out of the bounds!
        cout << "Please enter a length greater than 0: ";
        cin >> length;
    }

    cout << "Enter your preferred width: ";
    cin >> width;

    while (width <= 0) {
        cout << "Please enter a width greater than 0: ";
        cin >> width;
    }

    cout << "Enter your preferred height: ";
    cin >> height;

    while (height <= 0) {
        cout << "Please enter a height greater than 0: ";
        cin >> height;
    }

    // Calculating and displaying our results
    volume = length * width * height;

    cout << fixed << setprecision(2); // Rounding to two decimal points
    cout << "Your volume is " << volume << endl;

    
    
}

void romanNumerals()
{
    // Declaring our only variable
    int numbers;
    
    // Asking our question
    cout << "Welcome to Roman Numerals!" << endl;
    cout << "Enter a number from 1 to 10: " << endl;
    cin >> numbers;

    while (numbers > 10 || numbers <= 0) {
        cout << "Please enter a number between 1 and 10: ";
        cin >> numbers;
    }

    // A switch statement to replace the use of multiple "if" statements
    switch (numbers) {
        case 1:
        cout << "The Roman version is I" << endl;
        break; 
        case 2:
        cout << "The Roman version is II" << endl;
        break;
        case 3:
        cout << "The Roman version is III" << endl;
        break;
        case 4:
        cout << "The Roman version is IV" << endl;
        break;
        case 5:
        cout << "The Roman version is V" << endl;
        break;
        case 6:
        cout << "The Roman version is VI" << endl;
        break;
        case 7:
        cout << "The Roman version is VII" << endl;
        break;
        case 8:
        cout << "The Roman version is VIII" << endl;
        break;
        case 9:
        cout << "The Roman version is IX" << endl;
        break;
        case 10:
        cout << "The Roman version is X" << endl;
        break;
        
        
    }

    
    
    
}

void geometryCalculator() {
    // Declaring our variables
    int choice;
    double r, radius, length, width, height;
    
    // Presenting our menu
    cout << "Welcome to Geometry Calculator! Select your calculation:\n 1: Area of Circle\n 2: Area of Rectangle\n 3: Area of Triangle\n 4: Quit" << endl;
    cin >> choice;

    while (choice < 1 || choice > 4) {
        cout << "Please enter a calculation that is between 1 and 4: "; 
        cin >> choice;
    }

    // A switch statement that accepts inputs for choice then leads the user to their exact question, where it calculates and displays our result, then breaks the function back to our return question!
    switch (choice) {
        case 1:
        cout << "Welcome to Area of Circle! Please enter your radius to find the area: ";
        cin >> r;

        while (r <= 0) {
            cout << "Please enter a radius greater than zero: ";
            cin >> r;
        }

        radius = 3.14159*pow(r, 2);
        cout << "The area of the circle is " << radius << "!" << endl;
        break;
        case 2:
        cout << "Welcome to Area of Rectangle! Please enter your length: ";
        cin >> length;

        while (length <= 0) {
            cout << "Please enter a length greater than zero: ";
            cin >> length;
        }

        cout << "Now please enter your width: ";
        cin >> width;

        while (width <= 0) {
            cout << "Please enter a width greater than zero: ";
            cin >> width;
        }

        cout << "The area of the rectangle is " << length*width << "!" << endl;
        break;
        case 3:
        cout << "Welcome to Area of Triangle! Please enter your length and your height: ";
        cin >> height;

        while (height <= 0) {
            cout << "Please enter a height greater than zero: ";
            cin >> height;
        }

        cout << "Now please enter your length: ";
        cin >> length;

        while (length <= 0) {
            cout << "Please enter a length greater than zero: ";
            cin >> length;
        }

        cout << "The area of the triangle is " << (1/2)*length*height << "!" << endl;
        break;
        case 4: // Using our "Menu function!"
        cout << "Back to the menu!" << endl;
        return;
    }

    
} 

void distanceCalculator() 
{
    // Declaring our variables
    int hours, mph;

    // Asking our questions
    cout << "Welcome to the Distance Calculator! Please enter the amount of hours travelled: ";
    cin >> hours;

    while (hours < 0) {
        cout << "Please enter a positive quantity of hours: ";
        cin >> hours;
    }

    cout << "Now please enter the speed of the vehicle in miles per hour: ";
    cin >> mph;

    while (mph <= 0) {
        cout << "Please enter a quantity of speed that is greater than zero: ";
        cin >> mph;
    }
    
    // Displaying our results with whitespace for a table
    cout << "Hours" << setw(20) << "Distance Travelled" << endl;
    cout << "-----------------------------------------------" << endl;

    // Using this "if" statement allows use to show a calculated distance using just our speed in case our user declares that they travelled for zero hours!
    if (hours == 0) {
            cout << 0 << setw(10) << mph << endl;
    }
    else { // Using a "for" loop to continue calculating and displaying results based on the number of hours inputted
       for (int i = 1; i <= hours; i++) {
        
        cout << i << setw(10) << i*mph << endl;
        } 
    }
    


    
    
}

int main()
{
    
    while (true) // allows us to continue looping back to the menu using our "return" question!
    {
        int choice; // Declare our choice variable
        
        // Displaying our menu
        cout << "Welcome to our menu!\n Here are your options:\n 1: Average Rainfall\n 2: Volume of Box\n 3: Roman Numerals\n 4: Geometry Calculator\n 5: Distance Calculator\n"; // Keep adding!

        cout << "Select your option from 1 to 5, or enter 0 to quit: ";
        cin >> choice; // Stores input into choice for our if statement

        while (choice < 1 || choice > 5) {
            cout << "Please enter a valid input that is between 1 and 5: ";
            cin >> choice;
        }

        // Our choices
        if (choice == 0) {
            cout << "Goodbye!";
            break;
        }
        else if (choice == 1) {
            averageRainfall();
            if (!returnQuestion()) {
                break;
            }; // Allows us to go to our return question instead of immediately going back to the main menu!
        }
        else if (choice == 2) {
            volumeOfBox();
            if (!returnQuestion()) {
                break;
            };
        }
        else if (choice == 3) {
            romanNumerals();
            if (!returnQuestion()) {
                break;
            };
        }
        else if (choice == 4) {
            geometryCalculator();
            if (!returnQuestion()) {
                break;
            };
        }
        else if (choice == 5) {
            distanceCalculator();
            if (!returnQuestion()) {
                break;
            };
        }
        
    }
    return 0;
}