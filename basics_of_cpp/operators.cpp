#include<iostream>
using namespace std;

int main() {
  //* Arithmetic operators. (+, -, *, /, %)
  int a = 11, b = 5;

  cout << "Addition: " << (a + b) << endl;
  cout << "Subtraction: " << (a - b) << endl;
  cout << "Multiplication: " << (a * b) << endl;

  //* a is an int, and b is also an int.
  //* Because of (double)b, b is converted to double.
  //* Now, int / double is performed.
  //* C++ automatically converts a to double as well.
  //* Therefore, Floating-point Division occurs, and we get a decimal result.
  cout << "Division: " << (a / (double)b) << endl;

  cout << "Remainder: " << (a % b) << endl;

  //* Relational Operators (<, <=, >, >=, ==, !=)
  cout << (3 > 5) << endl; //* false → 0
  cout << (3 < 5) << endl; //* true → 1
  cout << (3 <= 3) << endl; //* true → 1
  cout << (3 >= 3) << endl; //* true → 1
  cout << (3 != 5) << endl; //* true → 1
  cout << (5 == 3) << endl; //* false → 0

  //* Logical Operators (|| (or), && (and), !(not))
  cout << (!true) << endl; //* false → 0
  cout << (!false) << endl; //* true → 1

  cout << (true || true) << endl; //* true → 1
  cout << (true || false) << endl; //* true → 1
  cout << (false || false) << endl; //* false → 0
  cout << (false || true) << endl; //* true → 1

  cout << (true && true) << endl; //* true → 1
  cout << (true && false) << endl; //* false → 0
  cout << (false && false) << endl; //* false → 0
  cout << (false && true) << endl; //* false → 0

  return 0;
}