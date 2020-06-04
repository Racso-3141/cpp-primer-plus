// static.cpp -- using a static local variable
#include <iostream>
#include <string>
// constants
// function prototype
using namespace std;
void strcount(const string str);
int main() {

  string input;
  cout << "Enter a line:\n";
  getline(cin, input);
  while (input != "") {
		strcount(input);
		cout << "Enter next line (empty line to quit):\n";
		getline(cin, input);
	}
  cout << "Bye\n";
  return 0;
}
void strcount(const string  str)
{
  int count = 0; // automatic local variable
  cout << "\"" << str <<"\" contains ";
  cout << count << " characters\n";
  cout << str.size() << " characters total\n";
}
