#include <iostream>
#include <vector>

using namespace std;

int main() {
  int x;

  int *ptr;

  x = 30;
  ptr = &x;

  cout << "X = " << x << endl;
  *ptr = 20;
  cout << "X = " << x << endl;

  cout << "Address: " << ptr << endl;

  // --- dynamic array ---
  cout << "Dynamic array" << endl;
  int *abc;
  abc = new int[20];
  cout << "ABC: " << abc << endl;
  cout << " 0: " << &(abc[0]) << endl;
  cout << " 1: " << &(abc[1]) << endl;
  cout << " 2: " << &(abc[2]) << endl;
  delete abc;

  abc = new int[50];
  cout << "ABC: " << abc << endl;
  cout << " 0: " << &(abc[0]) << endl;
  cout << " 1: " << &(abc[1]) << endl;
  cout << " 2: " << &(abc[2]) << endl;

}

