// exercise 8 of chap 4
#include <iostream>
#include <string>
using namespace std;

//Structure of pizza
struct Pizza
{
  string company;
  double diameter;
  double weight;
};

//main function
int main(int argc, char const *argv[]) {

  Pizza* pizza = new Pizza;
  cout << "Enter the pizza's diameter: ";
	cin >> pizza->diameter;
  cin.get();
	cout << "Enter the pizza's company name: ";
	getline(cin, pizza->company);
	cout << "Enter the pizza's weight: ";
	cin >> pizza->weight;
	cout << "Company: " << pizza->company << endl;
	cout << "Diameter: " << pizza->diameter << endl;
	cout << "Weight: " << pizza->weight << endl;
  delete pizza;
	return 0;
}
