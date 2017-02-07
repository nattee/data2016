#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
  less<int> x;
  greater<int> y;

  if (x(10,20)) {
    cout << "with less<int>,    calling x(10,20) return true" << endl;
  } else {
    cout << "with less<int>,    calling x(10,20) return false" << endl;
  }

  if (y(10,20)) {
    cout << "with greater<int>,    calling y(10,20) return true" << endl;
  } else {
    cout << "with greater<int>,    calling y(10,20) return false" << endl;
  }

  priority_queue<int, vector<int>, greater<int>> pq;
  pq.push(10);
  pq.push(20);
  pq.push(5);
  while (!pq.empty() ) {
    cout << pq.top() << endl; pq.pop();
  }
}

