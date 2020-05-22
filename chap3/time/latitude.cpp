#include <iostream>
int main(int argc, char const *argv[]) {
  const double seconds_to_degress = 1/3600.0;
  const double minutes_to_degress = 1/60.0;
  std::cout << "Enter a latitude in degrees, minutes, and seconds:\n"<< "First, enter the degrees:　";
  int degrees;
  std::cin >> degrees;
  std::cout << "Next, enter the minutes of arc: ";
  int minutes;
  std::cin >> minutes;
  std::cout << "Finally, enter the seconds of arc: ";
  int seconds;
  std::cin >> seconds;
  double latitude = degrees + minutes * minutes_to_degress + seconds * seconds_to_degress;
  std::cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = " << latitude <<" degrees";
  return 0;
}
