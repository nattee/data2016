#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
  set<int> s1;

  s1.insert(3);
  s1.insert(10);
  s1.insert(9);
  s1.insert(1);
  s1.insert(8);

  int x = 8;
  if (s1.find(8) == s1.end()) {
    cout << " cannot find " << x  << endl;
  } else {
    cout << " I have  " << x << endl;
  }

  s1.erase(x);
  cout << "after erase " << endl;
  if (s1.find(8) == s1.end()) {
    cout << " cannot find " << x  << endl;
  } else {
    cout << " I have  " << x << endl;
  }

  set<int>::iterator it;
  it = s1.find(9);
  if (it != s1.end()) {
    cout << " I found  " << *it << endl;
  }

}

