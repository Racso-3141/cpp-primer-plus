//candy bar
#include <iostream>
#include <cstring>
using namespace std;

struct CandyBar {
  char brand_name[40];
  double weight;
  int calories;
};

void set(CandyBar & candybar, const char * name = "Millenium Munch",
 double weight = 2.85, int calories = 350);
void display(const CandyBar&);
int main() {
  CandyBar one;
  CandyBar two;
  set(one, "Lezi", 321.2, 21);
  display(one);
  set(two);
  display(two);
  return 0;
}
void set(CandyBar & candybar, const char* name,
  double weight, int calories) {
  strcpy(candybar.brand_name, name);
  candybar.weight = weight;
  candybar.calories = calories;
}
void display(const CandyBar & candybar) {
  cout << "The brand name of candy bar is: " << candybar.brand_name << endl;
  cout << "The weight of candy bar is: " << candybar.weight << endl;
  cout << "The calories of candy bar is: " << candybar.calories << endl;
}
