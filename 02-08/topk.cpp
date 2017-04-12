#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> v;
  //input
  int n;
  cout << "Enter number of elements: ";
  cin >> n;
  cout << "Enter values" << endl;
  for (int i = 0;i < n;i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  sort(v.begin(),v.end());

  int k;
  cout << "Enter K: ";
  cin >> k;
  for (int i = 0;i < k;i++) {
    cout << v[v.size()-1-i] << " ";
  }
  cout << endl;





}

