#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
  vector<int> v;
  srand(0);
  int n = 50000;
  for (int i = 0;i < n;i++ ){
    v.push_back(rand());
  }

  while (v.empty() == false) {
    //write your code here
    // 1. find the maximum
    int max_pos = 0;
    for (size_t i = 0;i < v.size();i++) {
      if (v[max_pos] < v[i]) 
        max_pos = i;
    }
    //cout << v[max_pos] << endl;
    v.erase(v.begin() + max_pos);
  }
  
}

