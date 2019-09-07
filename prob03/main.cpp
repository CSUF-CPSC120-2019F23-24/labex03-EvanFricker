// This program calculates a person's height in feet (') and inches (").
#include <iostream>

// Delcaring my variables
int inches;
int feet;
int remainder;

int main()
{
  // Getting the initial height in inches
  std::cout << "Please enter the person's height in inches: ",
  std::cin >> inches;

  // Converting the inches to feet
  feet = inches / 12;

  // Getting the remainder inches
  remainder = inches % 12;

  // Displaying the results
  std::cout << "This person is " << feet << "\'" << remainder << "\"" << '\n';

  return 0;
}
