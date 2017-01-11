#include <iostream>
#include <vector>

using namespace std;

int main() {
  std::pair<string,int> student[10];

  student[0].first = "somchai";
  student[0].second = 50;

  student[1].first = "somying";
  student[1].second = 100;

  student[2].first = "somying2";
  student[2].second = 1000;

  student[2] = student[0];

}

