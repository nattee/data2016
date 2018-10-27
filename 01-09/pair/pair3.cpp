#include <iostream>
#include <vector>

using namespace std;

int main() {
  std::pair<string,int> p1("hahaha",3999);
  std::pair<float,int> p2(3.14,2);

  p2 = make_pair(55.33, 9999);
  p1 = make_pair("somchai",200);

  p1 = { "asdf", 111};

  cout << p1.first << " : " << p1.second << endl;
  cout << p2.first << " : " << p2.second << endl;
}

