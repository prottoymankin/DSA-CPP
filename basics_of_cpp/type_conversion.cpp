#include<iostream>
using namespace std;

int main() {
  //* Type Casting → Converting one data type to another.
  char character = 'A';

  //* Implicit Casting → Compiler automatically converts one data type to another.
  //* Compiler automatically converts char to int.
  int value = character;

  cout << value << endl; //* Output: 65 (ASCII value of 'A')

  //* Explicit Casting → Programmer manually converts one data type to another.
  double price = 99.99;
  int newPrice = (int)price; //* Manually converting the type.
  cout << newPrice << endl; //* Output: 99 (Decimal part is removed)

  return 0;
}