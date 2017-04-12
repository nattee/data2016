#include <iostream>
#include <vector>

using namespace std;

//find min and max
void f(int x,int y,int z,int *result_min,int *result_max) {
  *result_min = min(min(x,y),z);
  *result_max = max(max(x,y),z);
}

void g(int x,int y,int z,int &result_min,int &result_max) {
  cout << &result_min << endl;
  cout << &result_max << endl;
  result_min = min(min(x,y),z);
  result_max = max(max(x,y),z);
}

int main() {
  int a = 10;
  int b = 20;
  int c = -5;


  int xx,yy;
  f(a,b,c,&xx,&yy);
  cout << "min = " << xx << endl;
  cout << "max = " << yy << endl;

  cout << "---------------------" << endl;
  int p = -1,q = -2;
  cout << &p << endl;
  cout << &q << endl;
  g(10,400,-50,p,q);
  cout << "min = " << p << endl;
  cout << "max = " << q << endl;
}

