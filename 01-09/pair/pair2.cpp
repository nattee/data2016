#include <iostream>
#include <vector>

using namespace std;

int main() {
  std::pair<string,int> p1;
  std::pair<float,int> p2;

  p1.first = "dae";
  p1.second =20;

  p2.first = 2.33;
  p2.second = 9999;

  p1 = p2;

  cout << p1.first << " : " << p1.second << endl;
  cout << p2.first << " : " << p2.second << endl;


}

