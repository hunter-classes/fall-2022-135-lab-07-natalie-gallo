#include <cctype>
#include <iostream>
#include "funcs.h"
using namespace std;

// main
int main() {
  string s;
  int count = 0;
  while (getline(cin, s)) {
    // reads in line by line each iteration and stores to s
    s = removeLeadingSpaces(s);
    if (s[0] == '}') {
      count = count - 1;
    }
    for (int i = 0; i < count; i++) {
      cout << '\t';
    }
    cout << s << endl;
    count = count + countChar(s, '{');
    if (s[s.length() - 1] == '}' && countChar(s, '{') >= 1) {
      count = count - countChar(s, '}');;
    }
  }
  return 0;
}
