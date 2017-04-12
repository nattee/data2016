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
  node<int> *front,*a,*b;
  front = new node<int>();
  a = new node<int>();
  b = new node<int>();

  front->data = 10;
  a->data = 20;
  b->data = 30;

  front->next = a;
  a->next = b;
  b->next = NULL;


  cout << "-------- data ------------" << endl;
  cout << front->data << endl;
  cout << a->data << endl;
  cout << b->data << endl;


  cout << "-------- next ------------" << endl;
  cout << front->next << endl;
  cout << a->next << endl;
  cout << b->next << endl;

  cout << " ----------- loop ---------- " << endl;
  node<int> *p = front;
  int i = 0;
  while (p!=NULL) {
    cout << i << ":" << p->data << endl;
    p = p->next;
    i++;
  }

  cout << endl;
  //cout << front->next->next->data << endl;
  //cout << a->next->next->data << endl;
}

