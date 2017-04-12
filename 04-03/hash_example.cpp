#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


int main() {
  unordered_map<string,int> m;

  m["somchai"]  = 20;
  cout << m["nattee"] << endl;

  cout << "Size = " << m.size() << endl;

  for (unordered_map<string,int>::iterator it = m.begin(); it != m.end(); it++) {
    cout << "The key " << (*it).first << " is mapped to " << (*it).second << endl;
  }

  cout << "--------- m2 --------------" << endl;
  unordered_map<int,int> m2;
  m2[1] = 10;
  m2[2] = 20;
  m2[3] = 30;
  m2[50] = 500;
  m2[30] = 999;
  for (auto x : m2) {
    cout << "The key " << x.first << " is mapped to " << x.second << endl;
  }
}

