#include<iostream>
using namespace std;

int main () {
  //* Print numbers 1 to 5
  int i = 1;
  while (i <= 5) {
    cout << i << endl;
    i++;
  }

  //* Sum of numbers from 1 to n
  int n = 100;
  int sum = 0;

  for (int i = 1; i <= n; i++) {
    sum += i;
  }

  cout << "Sum of number from 1 to " << n << " is: " << sum;

  //* 'break' keyword
  for (int i = 1; i <= 10; i++) {
    if (i == 5) {
      break;
    }

    cout << i << " ";
  }

  //* Sum of all odd numbers from 1 to n;
  int n1 = 10;
  int oddSum = 0;

  for (int i = 1; i <= n1; i++) {
    if (i % 2 != 0) {
      oddSum += i;
    }
  }

  cout << "Sum of all odd numbers from 1 to " << n1 << " is: " << oddSum;

  //* Sum of all even numbers from 1 to n (while loop)
  int iterator = 1;
  int n2 = 10;
  int evenSum = 0;

  while (iterator <= n2) {
    if (iterator % 2 == 0) {
      evenSum += iterator;
    }
    iterator++;
  }

  cout << "Sum of all even numbers from 1 to " << n2 << " is: " << evenSum;

  //* Check if a number is prime or not.
  int user_n;
  bool isPrime = true;

  cout << "Enter a number: ";
  cin >> user_n;

  if (user_n < 2) {
    isPrime = false;
  } else {
    for (int i = 2; i*i <= user_n; i++) {
      if (user_n % i == 0) {
        isPrime = false;
        break;
      }
    }
  }

  if (isPrime) {
    cout << user_n << " is a prime number.";
  } else {
    cout << user_n << " is not prime.";
  }

  //* Nested loops
  int m = 10;

  for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= m; i++ ) {
      cout << "* ";
    }

    cout << endl;
  }

  //* Sum of all numbers from 1 to N which are divisible by 3
  int totalSum = 0;
  int N = 20;

  for(int i = 3; i <= N; i += 3) {
    totalSum += i;
  }

  cout << totalSum;

  //* Find factorial of a number N
  int factorial = 1;
  int N1 = 5;

  for (int i = 1; i <= N1; i++) {
    factorial *= i;
  }

  cout << factorial;
  
  return 0;
}