/*
  Task A
*/

#include <iostream>
#include <cctype>
using namespace std;

//prototype
string removeLeadingSpaces(string line);

//main
int main()
{
  string s;
  while (getline(cin,s)){ //reads in line by line each iteration and stores to s
  cout << removeLeadingSpaces(s) << endl;
  }
  return 0;
}

//function
string removeLeadingSpaces(string line){
  //read in each character of line, c
  //if isspace(int c) == true -> ignore and move to next
  //if isspace(int c) == false -> add c into a string until == true
  //return the var string (^substring??)
  string unindent;
  char c;
  bool space = true;
  int i = 0;

  while (space){
    c = line[i];
    if (isspace(c)){
      space = true;
    } else {
      space = false;;
    }
    i = i + 1;
  }
  if (space == false){
    unindent = line.substr(i-1);
  }
  return unindent;  
}

/*
  For task a, would i do cin >> var1 >> var2 etc
  or maybe getline would work and then add fixed line to a return var called result?
*/
