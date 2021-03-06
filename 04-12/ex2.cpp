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
  front = new node<int>(10,
      new node<int>(20,
        new node<int>(30,
          new node<int>(40,NULL)
        )
      )
  );


  //----------- write your code here ------------
  delete front->next->next->next;
  front->next->next->next = 
    front->next;
  front->next = front->next->next;
  delete front->next->next->next;
  front->next->next->next = NULL;



  //------------------- display --------------------
  node<int> *p = front;
  int i = 0;
  while (p!=NULL) {
    cout << i << ":" << p->data << endl;
    p = p->next;
    i++;
  }

}

