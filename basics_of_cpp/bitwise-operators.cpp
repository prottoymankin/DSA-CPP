#include<iostream>
using namespace std;

void bitwiseOperators () {
  //* Bitwise & (AND)
  cout << (6 & 10) << endl;

  //* Bitwise | (OR)
  cout << (6 | 10) << endl;

  //* Bitwise ^ (XOR)
  cout << (6 ^ 10) << endl;

  //* Left Shift Operator (<<) (Formula -> a << b = a * 2 to the power b)
  cout << (10 << 2) << endl;

  //* Right Shift Operator (>>) (Formula -> a >> b = a / 2 to the power b)
  cout << (10 >> 1) << endl;
}

//* WAF to find if a number is power of 2
bool findPowerOfTwo (int n) {
  if (n <= 0) return false;

  while (n % 2 == 0) {
    n /= 2;
  }

  return n == 1;
};

//* Check if a positive integer n is a power of 2 without a loop
bool isPowerOfTwo (int n) {
  return (n > 0) && (n & (n - 1)) == 0;
}

//* WAF to reverse an integer n
int reverseInteger (int n) {
  int reverse = 0;

  while (n > 0) {
    int remainder = n % 10;
    reverse = (reverse * 10) + remainder;
    n /= 10;
  }

  return reverse;
}

int main () {
  cout << reverseInteger(125);

  return 0;
}