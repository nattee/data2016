#include <iostream>
#include <vector>

using namespace std;

class Tmp {
  protected:
    vector<int> v;
  public:

    Tmp() {
      v.resize(1000000);
    }

    void insert(int i) {
      v[i]++;
    }

    void erase(int i) {
      if (v[i] > 0) v[i]--;
    }

    bool find(int i) {
      return v[i] > 0;

    }

}

int main() {
}

