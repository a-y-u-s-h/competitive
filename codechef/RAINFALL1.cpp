#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        In Chefland, precipitation is measured
        using a rain gauge in millimetre per hour.
        Given that it rains, X millimetre per hour
        on a day, find whether the rain is LIGHT,
        MODERATE, or HEAVY.

        Chef categorises rainfall as:
        1. LIGHT      for X <   3.
        2. MODERATE   for X >=  3.
        3. HEAVY      for X >=  7.
      ======================================
    */
    bool L = X < 3;
    bool M = X >= 3 && X < 7;
    bool H = X >= 7;

    if (L) std::cout << "LIGHT" << std::endl;
    if (M) std::cout << "MODERATE" << std::endl;
    if (H) std::cout << "HEAVY" << std::endl;
  }
  return 0;
}
