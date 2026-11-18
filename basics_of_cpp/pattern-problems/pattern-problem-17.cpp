/*
n = 4

*             *
* *         * *
* * *     * * *
* * * * * * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *

*/

#include<iostream>
using namespace std;

int main() {
  int n = 4;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j <= i; j++) {
      cout << "*" << " ";
    }

    for (int k = 0; k < (n - i - 1) * 2; k++) {
      cout << " " << " ";
    }

    for (int l = 0; l <= i; l++) {
      cout << "*" << " ";
    }

    cout << endl;
  }

  for (int i = 0; i < n; i++) {
    for (int j = n; j > i; j--) {
      cout << "*" << " ";
    }

    for (int k = 0; k < i*2; k++) {
      cout << " " << " ";
    }

    for (int l = n; l > i; l--) {
      cout << "*" << " ";
    }

    cout << endl;
  }

  return 0;
}