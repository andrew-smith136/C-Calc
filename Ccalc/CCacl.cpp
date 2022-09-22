// Calculator for C++

#include <iostream>
using namespace std;

int main ()
{
  // Declaring the variable to git the users input
  int n;
  cout << "Pick a number: ";
  cin >> n;
  int nt;
  cout << "Pick another number: ";
  cin >> nt;
  // Adding the numbers together
  cout << "The value of the numbers would be: " << n + nt;

  return 0;
}