#include<iostream>
#include<climits>
using namespace std;

//* Find smallest / largest number in an array
int findSmallestNumber (int numbers[], int size) {
  int smallest = INT_MAX;

  for (int i = 0; i < size; i++) {
    smallest = min(numbers[i], smallest);
  }

  return smallest;
}


int findLargestNumber (int numbers[], int size) {
  int largest = INT_MIN;

  for (int i = 0; i < size; i++) {
    largest = max(numbers[i], largest);
  }

  return largest;
}

//* Find smallest / largest number index in an array
int findSmallestNumberIndex (int numbers[], int size) {
  int smallest = INT_MAX;
  int index;

  for (int i = 0; i < size; i++) {
    smallest = min(numbers[i], smallest);
    if (numbers[i] == smallest) {
      index = i;
    }
  }

  return index;
}

int findLargestNumberIndex (int numbers[], int size) {
  int largest = INT_MIN;
  int index;

  for (int i = 0; i < size; i++) {
    largest = max(numbers[i], largest);
    if (numbers[i] == largest) {
      index = i;
    }
  }

  return index;
}

int main () {
  int size_numbers = 6;
  int numbers[size_numbers] = { 5, 15, 22, 1, -15, -5 };

  cout << findSmallestNumber(numbers, size_numbers) << endl;
  cout << findLargestNumber(numbers, size_numbers) << endl;

  cout << findSmallestNumberIndex(numbers, size_numbers) << endl;
  cout << findLargestNumberIndex(numbers, size_numbers) << endl;

  return 0;
}