#include <iostream>

int main(int argc, char const *argv[]) {
  int X;
  std::cin >> X;
  /*
    ======================================
      Chef organised 30km marathon in
      Chefland. The participants receive
      metals on completing the marathon as
      following (T = Time Taken):

      1. T < 3, they receive GOLD Medal.
      2. T >= 3, they receive SILVER Medal.
      3. T >= 6, theey receive BRONZE Medal.

      We need to find out which Medal Chefina
      would receive if she completed the
      marathon in X hours.
    ======================================
  */
  bool G = X < 3;
  bool S = X >= 3 && X < 6;
  bool B = X >= 6;

  if (G) std::cout << "GOLD" << std::endl;
  if (S) std::cout << "SILVER" << std::endl;
  if (B) std::cout << "BRONZE" << std::endl;
  return 0;
}
