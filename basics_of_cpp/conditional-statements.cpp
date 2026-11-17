#include<iostream>
using namespace std;

int main() {
  //* Check number if it is negative or positive.
  int n;

  cout << "Enter a number to check whether the number is positive or negative: ";
  cin >> n;

  if (n > 0) {
    cout << n << " is Positive.";
  } else if (n < 0) {
    cout << n << " is Negative.";
  } else {
    cout << "The number is Zero.";
  }

  //* Check age
  int age;

  cout << "Enter your age: ";
  cin >> age;

  if (age >= 18) {
    cout << "You are eligible for vote.";
  } else {
    cout << "You are not eligible for vote.";
  }

  //* Check number if it is oven or odd.
  int num;

  cout << "Enter a number to check whether it's odd or even: ";
  cin >> num;

  if (num <= 0) {
    cout << "Invalid input.";
  } else if (num % 2 == 0) {
    cout << num << " is an even number.";
  } else {
    cout << num << " is an odd number.";
  }

  //* Check grade
  int mark;

  cout << "Enter your mark: ";
  cin >> mark;

  if (mark < 80) {
    cout << 'C';
  } else if (mark >= 80 && mark < 90) {
    cout << 'B';
  } else {
    cout << 'A';
  }

  //* Find character is lowercase or uppercase
  char character;

  cout << "Enter a character to check whether the character is lowercase or uppercase: ";
  cin >> character;

  if (character >= 'A' && character <= 'Z') {
    cout << character << " is uppercase.";
  } else if (character >= 'a' && character <= 'z') {
    cout << character << " is lowercase.";
  } else {
    cout << "Invalid character.";
  }

  //* Ternary Operator
  int number = -45;
  cout << (number > 0 ? "Positive" : "Negative");

  return 0;
}