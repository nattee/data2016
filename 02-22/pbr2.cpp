#include <iostream>
#include <vector>

using namespace std;

void f(vector<int> v) {
  v[1] = 20;
  v.push_back(1000);

}

int main() {
  vector<int> p = {1,2,3,4};

  f(p);

  for (auto x : p) { cout << x << " "; } cout << endl;
}

