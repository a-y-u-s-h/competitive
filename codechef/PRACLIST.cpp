#include <iostream>

int main(int argc, char const *argv[]) {
  int X, Y;
  std::cin >> X >> Y;

  /*
    ======================================
      Count of all problems in a practice
      section is X. Chef has already
      attempted Y problems. How many problems
      are yet "un-attempted"?
    ======================================
  */

  std::cout << (X > Y ? X - Y : 0) << std::endl;

  return 0;
}
