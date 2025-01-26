// C++ code to learn about preprocessor directives.

#include <iostream>

using namespace std;

#define TEST 31

int main() {
  #ifdef TEST
    cout << "TEST defined\n";
  #else
    cout << "TEST undefined\n";
  #endif

  #undef TEST

  #ifdef TEST
    cout << "TEST defined\n";
  #else
    cout << "TEST undefined\n";
  #endif
}
