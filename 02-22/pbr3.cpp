#include <iostream>
#include <vector>

using namespace std;

void f(const vector<int> &v) {
  cout << v[0] << endl;
  v[0] = 20;
}

int main() {
  vector<int> p(1000000);

  for (int i = 0;i < 50000;i++) {
    f(p);
  }
}

