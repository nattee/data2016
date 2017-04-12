#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int main() {
  priority_queue<int> q;
  //input
  int n;
  cout << "Enter number of elements: ";
  cin >> n;
  cout << "Enter values" << endl;
  for (int i = 0;i < n;i++) {
    int x;
    cin >> x;
    q.push(x);
  }

  int k;
  cout << "Enter K: ";
  cin >> k;
  for (int i = 0;i < k;i++) {
    cout << q.top() << " ";
    q.pop();
  }
  cout << endl;





}

