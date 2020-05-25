//exercise 3
#include <iostream>
using namespace std;
void showmenu();
int main(int argc, char const *argv[]) {
  showmenu();
  char choice;
  cin >> choice;
  while(choice != 'c' && choice != 'p'
  && choice != 't' && choice != 'g') {
    showmenu();
    cout << "Please enter a c, p, t, or g: ";
    cin >> choice;
  }
  switch (choice) {
    case 'c': cout << "Be careful with the carnivore!\n";
              break;
    case 'p': cout << "Be a talented pianist!\n";
              break;

    case 't': cout << "Lemon tree!\n";
              break;
    case 'g': cout << "Play game with me!\n";
              break;

  }
  return 0;
}
void showmenu() {
  cout << "Please enter one of the following choices:\n"
  "c) carnivore        p) pianist\n"
  "t) tree             g) game\n";
}
