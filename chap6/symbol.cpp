//exercise1 symbol input
#include <iostream>
#include <cctype>
int main(int argc, char const *argv[]) {
  using namespace std;
  cout << "Enter text for analysis, and type @ to terminate input.\n";
  char ch;
  cin.get(ch); //get first character
  while (ch != '@') {
    if (isdigit(ch)) {
      break;
    } else if (islower(ch)) {
      ch = toupper(ch);
    } else if(isupper(ch)) {
      ch = tolower(ch);
    }
    std::cout << "The letter you enter now becomes " << ch << '\n';
    cin.get();
    cout << "Enter next character: ";
    cin.get(ch);
  }
  std::cout << "Bye." << '\n';
  return 0;
}
