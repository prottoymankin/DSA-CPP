#include<iostream>
using namespace std;

//* Decimal to Binary
int decimalToBinary (int number) {
  int binary = 0;
  int pow = 1;

  while (number > 0) {
    int remainder = number % 2;
    binary += remainder * pow; 
    pow *= 10;
    number /= 2;
  }

  return binary;
}

//* Binary to Decimal
int binaryToDecimal (int binary) {
  int decimal = 0;
  int pow = 1;

  while (binary > 0) {
    int remainder = binary % 10;
    decimal += remainder * pow;
    pow *= 2;
    binary /= 10;
  }

  return decimal;
}

int main () {
  cout << binaryToDecimal(100101);

  return 0;
}