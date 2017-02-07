#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
  priority_queue<int> pq;
  srand(0);
  int n = 50000;
  for (int i = 0;i < n;i++ ){
    pq.push(rand());
  }

  while (pq.empty() == false) {
    pq.pop();
  }
}

