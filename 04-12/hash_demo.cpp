#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Book {
public:
  string title;
  int    edition;
  double price;

  Book(string title, int ed = 1, double price = 199.0) :
       title(title), edition(ed), price(price)
  {}

  bool operator==(const Book &rhs) const {
    return title == rhs.title && edition == rhs.edition && price == rhs.price;
  }
};

namespace std {
  template<>
  struct hash<Book> {
  public:
    size_t operator()(const Book& b) const {
      cout << "Hasher is called with " << b.title << ":" << b.edition << ":" << b.price << endl;
      return 1;
//        return hash<string>()(b.title) ^
//               hash<int>()(b.edition);
    }
  };
}

class BookEqual {
public:
 bool operator()(const Book& b1, const Book b2) const {
   return true;
   //return b1.title==b2.title && b1.edition==b2.edition;
 }
};

class BookHasher {
public:
 size_t operator()(const Book& b) const {
   return 0;
   //return hash<string>()(b.title) ^ hash<int>()(b.edition);
 }
};

int main() {
  std::hash<int> hInt;
  std::hash<float> hFloat;


  for (int i = 0;i < 10;i++) {
    cout << hInt(i) << " : " << hFloat(i) << endl;
  }
  Book b11("Data Structures", 1);
  Book b22("Data Structures", 1);

  cout << b11.title << "," << b11.edition << "," << b11.price << endl;
  b11.price = 20;
  b22.price = 30;
  cout << "------- use operator == ---------------" << endl;
  if (b11 == b22) {
    cout << "SAME" << endl;
  } else {
    cout << "NOT SAME" << endl;
  }

  std::equal_to<Book> me;
  BookEqual be;
  cout << "------- use equal_to<Book> ---------------" << endl;
  if (me(b11,b22)) {
    cout << "SAME" << endl;
  } else {
    cout << "NOT SAME" << endl;
  }
  cout << "------- use BookEqual ---------------" << endl;
  if (be(b11,b22)) {
    cout << "SAME" << endl;
  } else {
    cout << "NOT SAME" << endl;
  }


  cout << "------- unordered_map demo no. 1---------------" << endl;
  Book b1("Data Structures", 1);
  Book b2("Data Structures", 3);
  //do the hash
  //umap use std::hash<Book> and operator== of Book
  unordered_map<Book,string,BookHasher> umap = {
      { {"Data Structures", 1, 200}, "reserved" },
      { {"Algorithm",       5, 200}, "available"}
  };
  cout << umap[b1] << endl;
  cout << umap[b2] << endl;
  cout << umap.size() << endl;

  cout << "------- unordered_map demo no. 2---------------" << endl;
  //do the hash
  //umap use BookHasher and BookEqual
  unordered_map<Book,string,BookHasher,BookEqual> umap2 = {
      { {"Data Structures", 1, 200}, "reserved" },
      { {"Algorithm",       5, 200}, "available"}
  };
  cout << umap2[b1] << endl;
  cout << umap2[b2] << endl;
  cout << umap2.size() << endl;
}

