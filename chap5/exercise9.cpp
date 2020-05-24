// words count rewrite of exercise 8
#include <iostream>
#include <string>
int main(int argc, char const *argv[]) {
  using namespace std;
  string words;
  cout << "Enter words (to stop, type the word done):\n";
  int count = 0;
  while(cin >> words && ("done" != words)) {
    ++count;
  }
  cout << "You entered a total of " << count << " words." << endl;
  return 0;
}
