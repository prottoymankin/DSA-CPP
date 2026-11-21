/*
  arr[] = { 2, 4, 7, 8, 1, 2, 5 }
  target = 8

  * Linear Search হলো এমন একটি searching algorithm, যেখানে array-এর প্রতিটি element একে একে check করে target value খুঁজে বের করা হয়।
*/

#include<iostream>
using namespace std;

int linearSearch (int arr[], int size, int target) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == target) return i;
  }

  return -1;
}

int main () {
  int arr[] = { 2, 4, 7, 8, 1, 2, 5 };
  int size = sizeof(arr) / sizeof(int);
  int target = 100;

  cout << linearSearch(arr, size, target);

  return 0;
}