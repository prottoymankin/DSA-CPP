#include <iostream>
using namespace std;

int main() {
  //* int → Usually uses 4 bytes (32 bits) of memory
  //* Stores integer numbers
  int num = 24;

  //* float → Usually uses 4 bytes (32 bits) of memory
  //* Stores decimal numbers
  //* Can maintain approximately 6–7 significant digits
  //* Decimal numbers are treated as double by default.
  //* Use 'f' or 'F' suffix to make a decimal literal float.
  float PI = 3.1416F;

  //* double → Usually uses 8 bytes (64 bits) of memory
  //* Stores decimal numbers
  //* Can maintain approximately 15–16 significant digits
  double salary = 25000.75;

  //* char → Usually uses 1 byte (8 bits) of memory
  //* Stores a single character
  char grade = 'A';

  //* bool → Usually uses 1 byte (8 bits) of memory
  //* Stores either true or false
  bool isActive = true;
  bool isAdmin = false;

  //* We can check the memory size of a data type or value using the sizeof operator.
  cout << "int: " << sizeof(int) << " bytes." << endl;
  cout << "float: " << sizeof(float) << " bytes." << endl;
  cout << "double: " << sizeof(double) << " bytes." << endl;
  cout << "char: " << sizeof(char) << " bytes." << endl;
  cout << "bool: " << sizeof(bool) << " bytes." << endl;

  //* By default, bool values are printed as 1 (true) and 0 (false).
  cout << isActive << endl; // Output: 1
  cout << isAdmin << endl; // Output: 0

  return 0;
}