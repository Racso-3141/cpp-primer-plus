// words count
#include <iostream>
#include <cstring>
int main(int argc, char const *argv[]) {
  using namespace std;
  char words[50];
  std::cout << "Enter words (to stop, type the word done):\n";
  int count = 0;
  while(cin >> words && strcmp("done", words)) {
    ++count;
  }
  cout << "You entered a total of " << count << " words." << endl;
  return 0;
}
