#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int main() {
  string s;
  cout << "Enter parentheses: ";
  cin >> s;
  stack<char> stk;

  bool result = true;

  for (auto c : s) {
    // if c is an open
    if (c == '(' || c == '[' || c =='{') {
      stk.push(c);
    } else {
      //else
      if (stk.empty() == false) {
        if ( (c == '(' && stk.top() != ')') ||
             (c == '[' && stk.top() != ']') ||
             (c == '{' && stk.top() != '}') ) {
          result = false;
          break;
        }
      } else {
        result = false;
        break;
      }
    }
  }

  if (result == true)
     cout << "Correct" << endl;
  else
     cout << "Wrong" << endl;


}

