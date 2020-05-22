#include <iostream>
int main(int argc, char const *argv[]) {
  const int seconds_in_minutes = 60;
  const int seconds_in_hours = 60 * 60;
  const int seconds_in_days = 60 * 60 * 24;
  std::cout << "Enter the number of seconds ";
  long long total_seconds;
  std::cin >> total_seconds;
  int days = total_seconds / seconds_in_days;
  int hours = (total_seconds % seconds_in_days) / seconds_in_hours;
  int minutes = (total_seconds % seconds_in_hours) / seconds_in_minutes;
  int seconds = (total_seconds % seconds_in_minutes);
  std::cout <<total_seconds << " seconds = "<<days<<" days, "<<hours<<" hours, "<<minutes<<" minutes, "<<seconds<<" seconds";
  return 0;
}
