//print times a silly function
#include <iostream>
using namespace std;
void silly(const char*, int);
int count = 0;
int main(int argc, char const *argv[]) {
  char * name = "enxuhan";
  char * school = "UIUC";
  char * from = "Beijing";
  silly(school, 1);
  silly(name, 0);
  silly(from, 2);
  silly(name, -1);
  return 0;
}
void silly(const char* str, int n) {
  ++count;
  if (n != 0) {
    cout << "print the string " << count << " times.\n";
    for (int i = 0; i < count; i++) {
      cout << str << endl;
    }
    return;
  }
  cout << "the second argument is 0, no print.\n";
}
