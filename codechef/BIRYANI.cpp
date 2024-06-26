#include <iostream>

int main(int argc, char const *argv[]) {
  int64_t t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;

    /*
      ======================================
        Chef needs to attend classes for X
        weeks (to learn how to make Biryani)
        and cost of classes per week is Y coins.
        What is total amount of money that Chef
        will have to pay?
      ======================================
    */

    std::cout << (X * Y) << std::endl;
  }
  return 0;
}
