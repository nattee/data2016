#include <iostream>
#include <vector>
#include <algorithm>    // you need this include if you want to use std::find(iterator,iterator,value)

using namespace std;

int main() {
  int n;
  int m;
  vector<int> v;        //I read into a vector, you can change this 
                        // to any other data structure
  cin >> n >> m;
  for (int i = 0;i < n;i++) {
    int x;
    cin >> x;
    v.push_back(x);
  }

  for (int i  0;i < m;i++) {
    int query;
    cin >> query;
    bool OK = false;

    //do something here......
    //

    if (OK) 
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}

