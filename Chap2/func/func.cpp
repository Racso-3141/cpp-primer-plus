#include <iostream>
void mice(void);
void run(void);
int main(int argc, char const *argv[]) {
  mice();
  run();
  return 0;
}
void mice() {
  std::cout << "Three blind mice" << '\n';
  std::cout << "Three blind mice" << '\n';
}
void run() {
  std::cout << "See how they run" << '\n';
  std::cout << "See how they run" << '\n';
}
