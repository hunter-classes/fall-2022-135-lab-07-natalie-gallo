#include <cctype>
#include <iostream>
#include "funcs.h"
#include <string>
#include <sstream>

using namespace std;
string prettify(string input_string);

// main
int main() {
  string input_string = "";
  string s;
  while (getline(cin, s)) {
    input_string += s + "\n";
  }

  string pretty_string = prettify(input_string);

  cout << pretty_string << "\n";
  
  return 0;
}

string prettify(string input_string){
  string s;
  int count = 0;
  stringstream iss(input_string);
  string return_string = "";
  while (getline(iss, s,'\n'))
  {
    // reads in line by line each iteration and stores to s
    s = removeLeadingSpaces(s);
    if (s[0] == '}')
    {
      count = count - 1;
    }
    for (int i = 0; i < count; i++)
    {
      return_string += '\t';
    }
    return_string += s + "\n";
    count = count + countChar(s, '{');
    if (s[s.length() - 1] == '}' && countChar(s, '{') >= 1)
    {
      count = count - countChar(s, '}');
    }
  }
  return return_string;
}