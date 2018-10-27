#include <iostream>
#include <vector>

using namespace std;

int x,y;

int &getRefOfXorY(bool wantX) {
  if (wantX)
    return x;
  else
    return y;
}

int main() {

  x = 20;
  y = 30;

  printf(" x = %d\n",x);
  printf(" y = %d\n",y);

  getRefOfXorY(false) = 200;

  printf(" x = %d\n",x);
  printf(" y = %d\n",y);
}

