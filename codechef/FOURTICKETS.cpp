#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        4 friends want to attend a concert.
        Each ticket costs X rupees.
        They have decided to go to the concert
        if and only if the total cost of tickets
        does not exceed 10 rupees. Determine
        whether they will be going to the concert
        or not.
      ======================================
    */
    bool condition = (X * 4) <= 1000;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
