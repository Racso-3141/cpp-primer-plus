//rewrite exercise 6 using input
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
// structure to declare contributor
struct contributor {
  string name;
  double contribution;
};
int main(int argc, char const *argv[]) {

  string fileName;
  ifstream inFile;
  int count;
  const int LEV = 10000;


//open a file.
  cout << "Enter name of the txt file: ";
  cin >> fileName;
  inFile.open(fileName);

//test whether the file can be opened.
  if (!inFile.is_open()) {
    cout << "Could not open the file " << fileName << endl;
    cout << "Program terminating.\n";//cin.get();
    exit(EXIT_FAILURE);
  }

  //read file content
  inFile >> count; //number of contributors
  inFile.get();
  contributor contributors[count];
  int Grand[count];
  int Patron[count];
  int grand = 0;
  int patron = 0;


	//input file content into array of contributor.
  int i = 0;
  while (i < count) {
    getline(inFile, contributors[i].name);
    inFile >> contributors[i].contribution;
    inFile.get();
    if (contributors[i].contribution >= LEV) {
      Grand[grand++] = i;
    } else {
      Patron[patron++] = i;
    }
    i++;
  }

  //display grand patrons
  cout << "Grand Patrons\n";
  if (grand == 0) {
    cout << "None\n";
  }
  //cout << "Name      Amount\n";
  for (int j = 0; j < grand; j++) {
    cout << contributors[Grand[j]].name << "      "
    << contributors[Grand[j]].contribution << endl;
  }
  //display patrons
  cout << "Patrons\n";
  if (patron == 0) {
    cout << "None\n";
  }
  //cout << "Name      Amount\n";
  for (int k = 0; k < patron; k++) {
    cout << contributors[Patron[k]].name << "      "
    << contributors[Patron[k]].contribution << endl;
  }

	inFile.close();
  return 0;

}
