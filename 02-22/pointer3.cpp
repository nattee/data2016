#include <iostream>
#include <vector>

using namespace std;

typedef vector<int>::iterator xxx;

int main() {
  double *arr = new double[10];
  
  double *x, *y;
  x = &arr[1];
  y = &arr[3];

  cout << "address" << endl;
  cout << "x : " << x << endl;
  cout << "y : " << y << endl;

  cout << (y - x) << endl;

}


