#include <iostream>
#include <vector>

using namespace std;

int main() {
  int *x,*y;

  x = new int[10];
  x[0] = 0;
  x[1] = 1;

  y = x;
  y[0] = 20;

  cout << x[0] << " " << x[1] << endl;
  cout << y[0] << " " << y[1] << endl;
  vector<int> v;
  for (int i = 0;i < v.size();i++) {


  }


}

