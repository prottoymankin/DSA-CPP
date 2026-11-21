#include<iostream>
#include<climits>
using namespace std;

//* WAF to calculate sum and product of all numbers in an array
void calculateSumAndProduct (int arr[], int size) {
  int sum = 0;
  int product = 1;

  for (int i = 0; i < size; i++) {
    sum += arr[i];
    product *= arr[i];
  }

  cout << "Sum: " << sum << endl;
  cout << "Product: " << product << endl;
}

//* WAF to swap the max and min values in an array
void swapMaxAndMinValue (int arr[], int size) {
  int largestValue = INT_MIN, smallestValue = INT_MAX;
  int largestValueIdx, smallestValueIdx;

  for (int i = 0; i < size; i++) {
    if (arr[i] > largestValue) {
      largestValue = arr[i];
      largestValueIdx = i;
    }

    if (arr[i] < smallestValue) {
      smallestValue = arr[i];
      smallestValueIdx = i;
    }
  }

  swap(arr[largestValueIdx], arr[smallestValueIdx]);

  cout << "Largest value: " << largestValue << ", Index: " << largestValueIdx << endl;

  cout << "Smallest value: " << smallestValue << ", Index: " << smallestValueIdx << endl;

  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
}

//* WAF to print all unique values in an array
void printUniqueValues (int arr[], int size) {
  for (int i = 0; i < size; i++) {
    int repeatCount = 0;

    for (int j = 0; j < size; j++) {
      if (arr[i] == arr[j]) {
        repeatCount++;
      }
    }

    if (repeatCount == 0) {
      cout << arr[i] << " ";
    }
  }
}

//* WAF to print intersection of 2 arrays
void printIntersection (int arr_1[], int arr_2[], int size_1, int size_2) {
  for (int i = 0; i < size_2; i++) {
    int isCommon = 0;

    for (int j = 0; j < size_1; j++) {
      if (arr_2[i] == arr_1[j]) {
        isCommon = 1;
        break;
      }
    }

    if (isCommon == 1) {
      cout << arr_2[i] << " ";
    }
  }
}

int main () {
  int arr[] = { 1, 2, 5, 4, 5 };
  int arr_2[] = {2, 4, 2, 7, 8, 4, 9};

  int numbers_1[] = {2, 4, 6, 8, 10, 12};
  int numbers_2[] = {1, 2, 5, 6, 9, 10, 15};

  // calculateSumAndProduct(arr, 5);
  // swapMaxAndMinValue(arr, 5);
  // printUniqueValues(arr_2, 7);
  printIntersection(numbers_2, numbers_1, 7, 6);

  return 0;
}