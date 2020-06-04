#include <iostream>
#include <new>
#include <cstring>
const int BUF = 512;
const int SIZE = 2;
char buffer[BUF];
struct chaff {
  char dross[20];
  int slag;
};
int main(int argc, char const *argv[]) {
  using namespace std;
  chaff * cp;
  cout << "Calling new and placement new:\n";
  cp = new(buffer) chaff[SIZE]; //use buffer array
  strcpy(cp[0].dross, "d1");
  cp[0].slag = 15;
  strcpy(cp[1].dross, "d2");
  cp[0].slag = 16;
  for(int i = 0; i < SIZE; i++) {
    cout << "Dross: " << cp[i].dross << endl;
    cout << "slag: " << cp[i].slag << endl;
  }
  delete [] cp;
  return 0;
}
