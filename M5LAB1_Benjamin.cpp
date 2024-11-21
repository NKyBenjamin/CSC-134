// CSC 134
// M5LAB1 - Choose Your Own Adventure
// N'Ky Benjamin
// 11/8/2024

#include <iostream>
using namespace std;

void main_menu();
void choice_front_door();
void choice_back_door();
void choice_go_home();
void choice_enter_the_house();
void choice_leave_the_house();

int main() {
  cout << "M5LAB1 - Choose Your Own Adventure" << endl;
  // load up the main menu
  main_menu();
  // when we return here, we're done
  cout << "Thanks for playing!" << endl;
  return 0; // finished with no errors
}

void main_menu() {
  // Write a simple menu that lets the user choose 1,2, or 3, or 4 to quit.
  cout << "Main Menu" << endl;
  cout << "You're in front of a spooky old house..." << endl;
  cout << "Do you:" << endl;
  cout << "1. Try the front door" << endl;
  cout << "2. Sneak around back" << endl;
  cout << "3. Forget it, and go home" << endl;
  cout << "4. [Quit]" << endl;
  cout << "Choose: ";
  int choice;
  cin >> choice;
  if (1 == choice) {
    choice_front_door();
  } else if (2 == choice) {
    choice_back_door();
  } else if (3 == choice) {
    choice_go_home();
  } else if (4 == choice) {
    cout << "Ok, quitting game" << endl;
    return; // go back to main()
  } else {
    cout << "That's not a valid choice, please try again." << endl;
    cin.ignore(); // clear the user input
    main_menu();  // try again
  }
}

// FUNCTION DEFINITIONS
// OK, we have the prototypes at the top, but
// now we have to actually write the functions.
// They go here, after main().
void choice_front_door() {
  cout << "Try the front door." << endl;
  cout << "It's locked. " << endl;
  cout << "Do you:" << endl;
  cout << "1. Check around back" << endl;
  cout << "2. Give up and go home" << endl;
  int choice;
  cout << "Choose: ";
  cin >> choice;
  if (1 == choice) {
    choice_back_door();
  } else if (2 == choice) {
    choice_go_home();
  }
}

void choice_back_door() { 
    cout << "Trying the back door." << endl;
    cout << "It opens!" << endl;
    cout << "Do you:" << endl;
    cout << "1. Enter the door" << endl;
    cout << "2. Go back home due to fear" << endl;
    int choice;
    cout << "Choose: " << endl;
    cin >> choice;
    if (choice == 1) {
        choice_enter_the_house();
    }
    else if (choice == 2) {
        choice_go_home();
    }
}

void choice_go_home() { 
    cout << "You end up going home. Perhaps you want to try again? Press Y to Quit:" << endl; 
    string choice;
    cin >> choice;
    if (choice == "Y") {
        return;
    }
}

void choice_enter_the_house() {
    cout << "You enter the house!" << endl;
    cout << "There is nothing in here!" << endl;
    cout << "You go further into the house. Who knows what you will see next?" << endl;
}

// any new choices go here