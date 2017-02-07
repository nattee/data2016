#include <iostream>
#include <vector>

using namespace std;

int main() {
  pair<int,string> s1 = {1,"haha"};
  pair<int,string> s2 = {2,"haha"};
  pair<int,string> s3 = {1,"hehe"};

  cout << (s1 < s2 ? "YES" : "NO") << endl; //yes
  cout << (s1 < s3 ? "YES" : "NO") << endl; //yes
  cout << (s2 < s3 ? "YES" : "NO") << endl; //no
}

