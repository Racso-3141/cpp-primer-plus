#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main(int argc, char const *argv[]) {
  int a;
  cin >> a;
  if (cin) {
    cout << "Yes.";
  }

      return 0;
  }
//cin meets tab, space, \n. stop reading and keep remaining part in input
// Leave \n in input after enter key.
// cin.sync() clear input.
//cin.get() read the whole line until meets \n. \n will be left in input.
//when using 2 continuos cin.get(str, size), there shoule be one cin.get()
//between them.
//cin.getline() discard \n
