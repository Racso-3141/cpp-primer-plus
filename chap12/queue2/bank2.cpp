// bank.cpp -- using the Queue interface
// compile with queue.cpp
#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()
#include "queue2.h"
const int MIN_PER_HR = 60;
bool newcustomer(double x); // is there a new customer?
int main()
{
  using std::cin;
  using std::cout;
  using std::endl;
  using std::ios_base;
  // setting things up
  std::srand(std::time(0)); // random initializing of rand()
  cout << "Case Study: Bank of Heather Automatic Teller\n";
  cout << "Enter maximum size of queue: ";
  int qs;
  cin >> qs;
  Queue line1(qs); // line1 queue holds up to qs people
  Queue line2(qs); // line1 queue holds up to qs people
  double min_per_cust; // average time between arrivals
  Item temp; // new customer data
  long turnaways; // turned away by full queue
  long customers; // joined the queue
  long served; // served during the simulation
  long sum_line; // cumulative line length
  int wait_time1, wait_time2; // time until autoteller is free
  long line_wait; // cumulative time in line
  cout << "Enter the number of simulation hours: ";
  int hours; // hours of simulation
  cin >> hours;
  // simulation will run 1 cycle per minute
  long cyclelimit = MIN_PER_HR * hours; // # of cycles
  cout << "Enter the average number of customers per hour: ";
  double perhour; // average # of arrival per hour
  cin >> perhour;
  while (perhour > 0) {
    min_per_cust = MIN_PER_HR / perhour;
    Item temp; // new customer data
    turnaways = 0; // turned away by full queue
    customers = 0; // joined the queue
    served = 0; // served during the simulation
    sum_line = 0; // cumulative line length
    wait_time1 = wait_time2 = 0; // time until autoteller is free
    line_wait = 0; // cumulative time in line
    // running the simulation
    for (int cycle = 0; cycle < cyclelimit; cycle++)
    {
      if (newcustomer(min_per_cust)) // have newcomer
      {
        if (line1.isfull() && line2.isfull())
          turnaways++;
        else
        {
          customers++;
          temp.set(cycle); // cycle = time of arrival
          if (line1.queuecount() < line2.queuecount())
            line1.enqueue(temp); // add newcomer to line1
          else
            line2.enqueue(temp); // add newcomer to line2
        }
      }
      //handle with line1
      if (wait_time1 <= 0 && !line1.isempty())
      {
        line1.dequeue (temp); // attend next customer
        wait_time1 = temp.ptime(); // for wait_time minutes
        line_wait += cycle - temp.when();
        served++;
      }
      if (wait_time1 > 0)
        wait_time1--;
      sum_line += line1.queuecount();
      //handle with line2
      if (wait_time2 <= 0 && !line2.isempty())
      {
        line1.dequeue (temp); // attend next customer
        wait_time2 = temp.ptime(); // for wait_time minutes
        line_wait += cycle - temp.when();
        served++;
      }
      if (wait_time2 > 0)
        wait_time1--;
      sum_line += line2.queuecount();
    }
    // reporting results
    if (customers > 0)
    {
      cout << "customers accepted: " << customers << endl;
      cout << " customers served: " << served << endl;
      cout << " turnaways: " << turnaways << endl;
      cout << "average queue size: ";
      cout.precision(2);
      cout.setf(ios_base::fixed, ios_base::floatfield);
      cout << (double) sum_line / cyclelimit << endl;
      cout << " average wait time: "
      << (double) line_wait / served << " minutes\n";
    }
    else
      cout << "No customers!\n";
    cout << "Done!\n";
    cout << "Enter the average number of customers per hour: ";
    cin >> perhour;
  }
  return 0;
}
// x = average time, in minutes, between customers
// return value is true if customer shows up this minute
bool newcustomer(double x)
{
  return (std::rand() * x / RAND_MAX < 1);
}
