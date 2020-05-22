//exercise 9 of chap 4, rewrite Structure array with new.
#include <iostream>
#include <string>
using namespace std;

//struct CandyBar
struct CandyBar
{
  string brand_name;
  float weight;
  int calories;
};

//main function
int main(int argc, char const *argv[]) {

  // allocate memory to CandyBar array
  CandyBar* snacks = new CandyBar[3];
  //Initialize an array of CandyBar
  *(snacks) = {"Mocha Munch", 2.3, 350};
  *(snacks + 1) = {"Snickers", 4.5, 260};
  *(snacks + 2) = {"monster", 1.6, 750};


  //display content of the first snack
  std::cout << "Brand name of the first snack: " << (*(snacks)).brand_name << '\n';
  std::cout << "Weight of the first snack: " << (*(snacks)).weight << '\n';
  std::cout << "Calories of first snack: " << (snacks) -> calories << '\n';
  std::cout << std::endl;

  //display content of the second snack
  std::cout << "Brand name of the second snack: " << snacks[1].brand_name << '\n';
  std::cout << "Weight of the second snack: " << snacks[1].weight << '\n';
  std::cout << "Calories of second snack: " << snacks[1].calories << '\n';
  std::cout << std::endl;

  //display content of the third snack
  std::cout << "Brand name of the third snack: " << snacks[2].brand_name << '\n';
  std::cout << "Weight of the third snack: " << snacks[2].weight << '\n';
  std::cout << "Calories of third snack: " << snacks[2].calories << '\n';

  //delete meomory of CandyBar array
  delete [] snacks;
  return 0;
}
