#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <set>
#include <map>

using namespace std;

int main() {
  map<int,int> m;
  //input
  int n;
  cout << "Enter number of elements: ";
  cin >> n;
  cout << "Enter values" << endl;
  for (int i = 0;i < n;i++) {
    int x;
    cin >> x;
    m[x]++;
  }

  for (auto data : m) {
    cout << "Value " << data.first << ", count " << data.second << endl;
  }

  int k;
  cout << "Enter K: ";
  cin >> k;
  auto it = m.rbegin();
  for (int i = 0;i < k;) {
    for (int j = 0;j < min(k-i,it->second);j++) {
      cout << it->first << " ";
    }
    i += it->second;
    it++;
  }
  cout << endl;
}
