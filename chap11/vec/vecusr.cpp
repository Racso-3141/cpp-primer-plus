// randwalk.cpp -- using the Vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib> // rand(), srand() prototypes
#include <ctime> // time() prototype
#include "vec.h"
#include <fstream>
int main()
{
  using namespace std;
  ofstream fout;
  fout.open("./thewalk.txt");
  using VECTOR::Vector;
  srand(time(0)); // seed random-number generator
  double direction;
  Vector step;
  Vector result(0.0, 0.0);
  int trials;    //Number of steps to move
  unsigned int highest, lowest, average, sum;
  unsigned long steps = 0;
  double target;
  double dstep;
  cout << "How many trials to proceed: ";
  std::cin >> trials;
  cout << "Enter target distance (q to quit): ";
  int i = 0;
  highest = lowest = average = sum = 0;
  while (i < trials)
  {
    cout << "Enter target distance (q to quit): ";
    cin >> target;
    fout << "Target distance: " << target << ", Step Size: " << dstep << endl;
    cout << "Enter step length: ";
    if (!(cin >> dstep))
      break;
    fout << "0: (x,y) = " << result << endl;
    while (result.magval() < target)
    {
      direction = rand() % 360;
      step.reset(dstep, direction, Vector::POL);
      result = result + step;
      steps++;
      fout << steps << ": (x,y) = " << result << endl;
    }
    if (steps > highest) {
      highest = steps;
    } else if (steps < lowest) {
      lowest = steps;
    }
    sum += steps;
    cout << "After " << steps << " steps, the subject "
      "has the following location:\n";
    fout << "After " << steps << " steps, the subject "
      "has the following location:\n";
    cout << result << endl;
    fout << result << endl;
    result.polar_mode();
    cout << " or\n" << result << endl;
    fout << " or\n" << result << endl;
    cout << "Average outward distance per step = "
      << result.magval()/steps << endl;
    fout << "Average outward distance per step = "
      << result.magval()/steps << endl;
    steps = 0;
    result.reset(0.0, 0.0);
    i++;
  }
  average = sum / i;
  cout << "Highest: " << highest << endl;
  cout << "Lowest: " << lowest << endl;
  cout << "Average: " << average << endl;
  cout << "Bye!\n";
  cin.clear();
  while (cin.get() != '\n')
    continue;
  fout.close();
  return 0;
}
