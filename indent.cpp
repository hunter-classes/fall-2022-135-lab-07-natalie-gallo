/*
  TASK B
*/

#include <cctype>
#include <iostream>
using namespace std;

// prototype
int countChar(string line, char c);
string removeLeadingSpaces(string line);

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
  }
  return 0;
}

// function
int countChar(string line, char c) {
  // read in characters of line
  // if c == {, then have a counter be increased by 1
  // if c == }, decrease the counter by 1

  int counter = 0;

  int length = line.length();

  char chr;

  for (int i = 0; i < length; i++) {
    chr = line[i];
    if (chr == c) {
      counter = counter + 1;
    }
  }
  return counter;
}

/*
  As it reads the input line by line,
  it should also count the number of open and closed { } in it,
  and keep track of how many blocks is currently open at the beginning of each
  line.
*/

string removeLeadingSpaces(string line) {
  // read in each character of line, c
  // if isspace(int c) == true -> ignore and move to next
  // if isspace(int c) == false -> add c into a string until == true
  // return the var string (^substring??)
  string unindent;
  char c;
  bool space = true;
  int i = 0;

  while (space) {
    c = line[i];
    if (isspace(c)) {
      space = true;
    } else {
      space = false;
      ;
    }
    i = i + 1;
  }
  if (space == false) {
    unindent = line.substr(i - 1);
  }
  return unindent;
}
