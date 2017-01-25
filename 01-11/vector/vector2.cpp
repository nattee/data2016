#include <iostream>
#include <vector>

using namespace std;

int main() {
  std::vector<string> vs1;

  cout << "Now vs1 has " << vs1.size() << " element" << endl;
  vs1.push_back("asdf");

  cout << "Now vs1 has " << vs1.size() << " element" << endl;
  vs1.push_back("asdf2");

  cout << "Now vs1 has " << vs1.size() << " element" << endl;
  vs1.push_back("asdf3");

  cout << "Now vs1 has " << vs1.size() << " element" << endl;
  vs1.push_back("somchai");

  cout << "Now vs1 has " << vs1.size() << " element" << endl;
  vs1.push_back("xxx");

  for (size_t i = 0;i < vs1.size();i++) {
    cout << i << ":" << vs1[i] << endl;
  }

  vs1.resize(10);
  for (size_t i = 0;i < vs1.size();i++) {
    cout << i << ":" << vs1[i] << endl;
  }

  vs1.resize(3);
  for (size_t i = 0;i < vs1.size();i++) {
    cout << i << ":" << vs1[i] << endl;
  }
}

