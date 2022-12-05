#include <cctype>
#include <iostream>
using namespace std;

// functions

//task b "indent.cpp"
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

//task a "unindent.cpp"
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
