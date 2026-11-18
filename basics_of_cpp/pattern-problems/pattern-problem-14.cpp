/*
n = 4

A A A A
  B B B
    C C
      D
*/

#include<iostream>
using namespace std;

int main() {
  int n = 5;
  char ch = 'A';

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      cout << " "  << " ";
    }

    for (int k = 0; k < n - i; k++) {
      cout << ch << " ";
    }

    ch++;
    cout << endl;
  }

  return 0;
}