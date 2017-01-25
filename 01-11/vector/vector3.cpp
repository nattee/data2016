#include <iostream>
#include <vector>

#include <algorithm>

using namespace std;

int main() {
  std::vector<int> vs1;
  int n = 5;

  for (int i = 0;i < n;i++) {
    vs1.push_back(i);
  }
  vs1.pop_back();

  vs1.insert(vs1.begin(), 100);
  vs1.insert(vs1.begin()+3, 200);
  vs1.insert(vs1.end()  ,300);
  
  for (size_t i = 0;i < vs1.size();i++) {
    cout << i << ": " << vs1[i] << endl;
  }
  cout << "find...." << endl;

  std::vector<int>::iterator it = find(vs1.begin(),vs1.end(),3);
  if (it == vs1.end() ) {
    cout << "not found " << endl;
  } else { 
    cout << "found at index " << (it - vs1.begin()) << endl;
    vs1.insert(it,60000);
  }
  for (size_t i = 0;i < vs1.size();i++) {
    cout << i << ": " << vs1[i] << endl;
  }


}

