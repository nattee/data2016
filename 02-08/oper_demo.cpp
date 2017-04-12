#include <iostream>
#include <vector>

using namespace std;

class Student {
  public:
    int x,y;

    bool l(Student other) {
      return this->x < other.x;
    }

    bool operator<(Student &other) {
      return this->x < other.x;
    }
};

int main() {
  Student a,b;
  a.x = 10;
  a.y = 20;

  b.x = 30;
  b.y = -2;

  if ( a < b ) {
    cout << "A is less than B";
  } else {
    cout << "A is not less than B";

  }
}

