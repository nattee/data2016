#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
  priority_queue<vector<int>> pq;
  vector<int> v1 = {1,2,3};
  vector<int> v2 = {2,2};
  vector<int> v3 = {9,2};
  vector<int> v4 = {10,1,1,1,2};
  vector<int> v5 = {2,1};

  pq.push(v1);
  pq.push(v2);
  pq.push(v3);
  pq.push(v4);
  pq.push(v5);

  if (v1 < v2) {
    cout << " YESSSS" << endl;
  } else {
    cout << " NOOOOO" << endl;
  }

  while (pq.empty() == false) {
    vector<int> v = pq.top();
    for (auto x : v) 
      cout << x << " ";
    cout << endl;
    pq.pop();
  }

}

