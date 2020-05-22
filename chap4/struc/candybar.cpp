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

  //Initialize CandyBar
  CandyBar snack = {
    "Mocha Munch",
    2.3,
    350
  };

  //display content
  std::cout << "Brand name of snack: " << snack.brand_name << '\n';
  std::cout << "Weight of snack: " << snack.weight << '\n';
  std::cout << "Calories of snack: " << snack.calories << '\n';

  return 0;
}
