#include <iostream>
#include <vector>

using namespace std;

int main() {
  std::vector<int> v1(10,4);
  std::vector<int> v2(20,5);


  v1[4] = 20;
  cout << "this is v1" << endl;
  for (size_t i = 0;i < v1.size();i++) {
    cout << i << ": " <<  v1[i] << endl;
  }

  v2 = v1;
  v1[0] = 0;
  v1[1] = 1;
  cout << "this is v2" << endl;
  for (size_t i = 0;i < v2.size();i++) {
    cout << i << ": " <<  v2[i] << endl;
  }
}

