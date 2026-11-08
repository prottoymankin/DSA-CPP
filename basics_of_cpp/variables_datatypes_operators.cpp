#include<iostream>
using namespace std;

int main() {
  int age = 24;
  char grade = 'A';

  cout << "Age: " << age << " (" << sizeof(age) << " Bytes" << ")" << endl;
  cout << "Grade: " << grade << " (" << sizeof(grade) << " Bytes" << ")" << endl;
  return 0;
}