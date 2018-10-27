#include <iostream>
#include <stdio.h>
#include <vector>

using namespace std;

int main() {
  int x,y, *ptr, *ptr2, **ptrptr;


  x = 30;
  ptr = &x;
  ptr2 = &y;
  ptrptr = &ptr;

  cout << "X = " << x << endl;
  *ptr = 20;
  cout << "X = " << x << endl;

  cout << "Address: " << ptr << endl;
  cout << "Address: " << ptr2 << endl;
  cout << "Address: " << ptrptr << endl;
  printf("%x\n",(unsigned int)ptr);

  // --- dynamic array ---
  cout << "Dynamic array" << endl;
  int *abc;
  for (int i = 0;i < 10000000;i++) {
    if (i % 100 == 0) 
      cout << "round " << i << endl;
    abc = new int[2000000];
    abc[0] = 10;
    abc[19] = -2;
//    cout << "ABC: " << abc << endl;
//    cout << " 0: " << &(abc[0]) << endl;
//    cout << " 1: " << &(abc[1]) << endl;
//    cout << " 2: " << &(abc[2]) << endl;
    //delete abc;
  }

  abc = new int[50];
  cout << "ABC: " << abc << endl;
  cout << " 0: " << &(abc[0]) << endl;
  cout << " 1: " << &(abc[1]) << endl;
  cout << " 2: " << &(abc[2]) << endl;

}

