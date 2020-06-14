#include "cow.h"

int main(int argc, char const *argv[]) {
  Cow cow1;
  Cow cow2("Tractor", "sleeping", 326.1);

  cow1.ShowCow();
  cow2.ShowCow();

  Cow cow3(cow2);
  Cow cow4;
  cow4 = cow2;
  cow3.ShowCow();
  cow4.ShowCow();

  return 0;
}
