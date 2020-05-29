//function call with function pointers
  #include <iostream>
  using namespace std;
  double add(double, double);
  double multiply(double, double);
  double sub(double, double);
  double calculate(double, double, double (*)(double, double));
  int main(int argc, char const *argv[]) {
    double x, y;
    double (*pa[3]) (double, double) = {add, multiply, sub};
    char * op[3] = {"add", "multiply", "sub"};
    cout << "Enter pair of double values, enter non-numeric values to quit.\n";
    while (cin >> x >> y) {
      for (int k = 0; k < 3; k++) {
        cout << op[k] << " = "
        << calculate(x, y, pa[k])<< "\n";
      }
      // cout << "The value of add(" << x << ", " << y << ") is "
      //   << calculate(x, y, add) << endl;
      // cout << "The value of multiply(" << x << ", " << y << ") is "
      //   << calculate(x, y, multiply) << endl;
      // cout << "The value of sub(" << x << ", " << y << ") is "
      //   << calculate(x, y, sub) << endl;
      cout << "Enter pair of double values, enter non-numeric values to quit.\n";
    }
    return 0;
  }
  double add(double x, double y)
  {
    return x + y;
  }
  double multiply(double x, double y)
  {
    return x * y;
  }
  double sub(double x, double y)
  {
    return x - y;
  }

  double calculate(double x, double y, double (*func)(double, double)) {
    return (*func)(x, y);
  }
