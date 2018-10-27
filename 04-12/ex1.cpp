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

  front->data = 20;

  //----------- write your code here ------------
  front = new node<int>(10,front);
  front->next->next = new<int>(30,NULL);


  //------------------- display --------------------
  node<int> *p = front;
  int i = 0;
  while (p!=NULL) {
    cout << i << ":" << p->data << endl;
    p = p->next;
    i++;
  }

}

