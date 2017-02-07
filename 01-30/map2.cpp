#include <iostream>
#include <map>

using namespace std;

int main() {
  map<string,int> m;

  m["aa"] = 44;
  m["d"] = 99;
  m["a"] = 10;
  m["b"] = 20;
  cout << (m["c"]++) << endl;
  // erase aa, b, c
  //
  //m.erase( m.find("aa"), m.find("d") );
  auto it = m.find(aa);
  auto it2 = it;
  it2++;
  it2++;
  it2++;
  m.erase( it, it2 );

  for (auto x : m) {
    cout << x.first << ":" << x.second << endl;
  }
}
