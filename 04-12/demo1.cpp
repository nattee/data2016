#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class node {
  public:
    T data;
    node *next;

    node() :
      data( T() ), next( this ) { }

    node(const T& data, node* next) :
      data ( T(data) ), next( next ) { }
};

int main() {
  node<int> *front;
  front = new node<int>();

  (*front).data = 10;

  cout << front->data << endl;
  cout << front->next << endl;
}

