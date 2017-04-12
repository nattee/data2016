#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <set>

using namespace std;

int main() {
  set<int> s;
  //input
  int n;
  cout << "Enter number of elements: ";
  cin >> n;
  cout << "Enter values" << endl;
  for (int i = 0;i < n;i++) {
    int x;
    cin >> x;
    s.insert(x);
  }


  //THIS DOES NOT WORK WHEN WE HAVE DUPLICATE VALUE
  int k;
  cout << "Enter K: ";
  cin >> k;
  auto it = s.end();
  it--;
  for (int i = 0;i < k;i++) {
    cout << *it << " ";
    it--;
  }
  cout << endl;
}
