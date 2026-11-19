#include<iostream>
using namespace std;

//* Calculate sum of numbers from 1 to N
int sumOfNumbers (int n) {
  int sum = 0;

  for (int i = 1; i <= n; i++) {
    sum += i;
  }

  return sum;
}

//* Calculate N factorial
int findFactorial (int n) {
  int factorial = 1;

  for (int i = 1; i <= n; i++) {
    factorial *= i;
  }

  return factorial;
}

//* Calculate sum of digits of a number
int calculateSumOfDigits (int number) {
  int sum = 0;

  while(number > 0) {
    sum = sum + (number % 10);
    number /= 10;
  }

  return sum;
}

//* Calculate nCr binomial coefficient for n & r
int nCr (int n, int r) {
  int factorial_n = findFactorial(n);
  int factorial_r = findFactorial(r);
  int factorial_n_minus_r = findFactorial(n-r);

  return factorial_n / (factorial_r * factorial_n_minus_r);
}

//* WAF to check a number is prime or not
bool checkPrime (int number) {
  if (number < 2) return false;
  
  for (int i = 2; i*i <= number; i++) {
    if (number % i == 0) {
      return false;
    }
  }

  return true;
}

//* WAF to print all prime numbers from 1 to N
void printPrimeNumbers (int n) {
  for (int i = 2; i <= n; i++) {
    if (checkPrime(i) == 1) {
      cout << i << " ";
    }
  }
}

//* WAF to print nth Fibonacci
void printFibonacci (int n) {
  int prev = 0;
  int curr = 1;

  cout << prev << " " << curr << " ";

  for (int i = 2; i < n; i++) {
    cout << prev + curr << " ";
    int temp = curr;
    curr = prev + curr;
    prev = temp;
  }
}

int main () {
  printFibonacci(10);

  return 0;
}