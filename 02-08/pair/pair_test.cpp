#include <iostream>
#include <vector>

using namespace std;

int main() {
  pair<string,int> p;

  p.first = "somchai";
  p.second = 10;

  pair<string,int> p2(p1);
  // pair<string,int> p2 = new pair<string,int>(p1)
  //

  pair<string,int> p2("somchai",499);

}

