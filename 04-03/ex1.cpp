#include <iostream>
#include <vector>

using namespace std;

class Tmp {
  protected:
    vector<int> v;
  public:
    void insert(int i) {
      v.push_back(i);
    }

    void erase(int i) {
      auto it = std::find(v.begin(),v.end(),i);
      if (it != v.end()) v.erase(it);
    }

    bool find(int i) {
      auto it = std::find(v.begin(),v.end(),i);
      if (it != v.end()) return true;
      return false;

    }

}

int main() {
}

