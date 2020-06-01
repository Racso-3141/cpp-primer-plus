#include <iostream>
#include <cctype>
#include <string>
using namespace std;
string upper_str(string&);
int main(int argc, char const *argv[]) {
  string input;
  cout << "Enter a string(q to quit): ";
  while (getline(cin, input), input != "q") {
    cout << "The upper case form of " << input << " is "
    << upper_str(input) << endl;
    cout << "Enter a string(q to quit): ";
  }
  cout << "Bye.";
  return 0;
}
string upper_str(string & str) {
  for(int i = 0; i < str.length(); i++)
    str[i] = toupper(str[i]);
  return str;
}
