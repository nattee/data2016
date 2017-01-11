#include <iostream>

using namespace std;

int factorial(int a) {
  if (a == 0) return 1;
  if (a == 1) return 1;
  else
  {
    return a*factorial(a-1);
  }

}

int main()
{
    for (int i = 0;i < 10;i++) {
      cout << "factorial of " << i << " is " << factorial(i) << endl;
    }
    return 0;
}
