//exercise 8
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
const int SIZE = 5000;
int main(int argc, char const *argv[]) {
  using namespace std;

  int count = 0;
  string filename;
  ifstream inFile;
  char ch;

  cout << "Enter name of the txt file: ";
  cin >> filename;
  inFile.open(filename);

  if (!inFile.is_open()) {
    cout << "Could not open the file " << filename << endl;
    cout << "Program terminating.\n";//cin.get();
    exit(EXIT_FAILURE);
  }
   inFile >> ch; // get first value
   while (inFile.good()) {
     if (isalpha(ch)) {
       count++;
     }
     inFile >> ch;
   }
   cout << "There are " << count << " characters in total.";

   inFile.close();
  return 0;
}
