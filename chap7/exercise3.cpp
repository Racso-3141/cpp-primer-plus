#include <iostream>
using namespace std;
struct box {
  char maker[40];
  float height;
  float width;
  float length;
  float volume;
};
void display(box);
void setVolume(box*);
int main(int argc, char const *argv[]) {
  box b = {"Enxu Han", 23, 21, 20, 450};
  cout << "display all variables: \n";
  display(b);
  setVolume(&b);
  display(b);
  return 0;
}
void display(box b) {
  cout << "maker: " << b.maker << endl;
  cout << "height: " << b.height << endl;
  cout << "width: " << b.width << endl;
  cout << "length: " << b.length << endl;
  cout << "volume: " << b.volume << endl;
}
void setVolume(box * pb) {
  pb -> volume = (pb -> height) * (pb -> width) * (pb -> length);
}
