#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
  map<string,string> m;
  m["asdf"] = "kkk";
  m["hahaha"] = "555";

  cout << m["asdf"] << endl;
  cout << m.size() << endl;
  cout << "The value at 'abc' is " << m["abc"] << "." << endl;
  cout << m.size() << endl;

  m["asdf"] = "1112222haha";
  cout << m["asdf"] << endl;
  cout << m.size() << endl;

  // iterate over all data in a map
  map<string,string>::iterator it;
  for (it = m.begin(); it != m.end(); it++) {
    cout << "The key is " << (*it).first << " the value is " << (*it).second << endl;
  }

  // find
  string key = "asdf";
  map<string,string>::iterator it2 = m.find(key);
  if (it2 == m.end()) {
    cout << "There is no box where the key is " << key << endl;
  } else {
    cout << "I have a box with key" << key  << " and value = " << (*it2).second << endl;

  }
}

