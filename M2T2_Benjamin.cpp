// CSC 134
// M2T2
// N'Ky Benjamin
// 9/9/2024

#include <iostream>

using namespace std;

int main()
{
  string name;
  int apples;
  double pricePerApple;

  cout << "Enter your name: ";
  cin >> name;
  cout << "How many apples are being sold?: ";
  cin >> apples;
  cout << "What is the price per apple?: ";
  cin >> pricePerApple;

  double totalPrice = apples * pricePerApple;
  
  cout << "Welcome to " << name;
  cout << "'s apple orchard." << endl;
  cout << "We have " << apples;
  cout << " apples in stock" << endl;
  cout << "Apples are currently $";
  cout << pricePerApple << " each." << endl;
  cout << "If you want them all, that will be $";
  cout << totalPrice << endl;


  return 0;
  
  
}