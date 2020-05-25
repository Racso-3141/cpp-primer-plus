//rewrite exercise 6 using input
#include <iostream>
#include <fstream>
// structure to declare contributor
struct contributor {
  string name;
  double contribution;
};
int main(int argc, char const *argv[]) {
  using namespace std;

  string fileName;
  ifStream inFile;
  int count;
  string name;
  double contribution;

//open a file.
  cout << "Enter name of the txt file: ";
  cin >> filename;
  inFile.open(filename);

//test whether the file can be opened.
  if (!inFile.is_open()) {
    cout << "Could not open the file " << filename << endl;
    cout << "Program terminating.\n";//cin.get();
    exit(EXIT_FAILURE);
  }

  //read file content
  inFile >> count;
  inFile.get(); //number of contributors
  

	for (int i = 0; i < count; i++)
	{
		getline(inFile, name);
		fin >> patron.donation;
		cout << "Name: " << patron.name << ", donation: " << patron.donation << endl;
	}

	fin.close();
  return 0;
}
