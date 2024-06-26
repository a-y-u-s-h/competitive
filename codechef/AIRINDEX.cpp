#include <iostream>

int main(int argc, char const *argv[]) {
  int X;
  std::cin >> X;
  /*
    ======================================
      X is the AQI that Chef has measured.
      Government wants to keep AQI strictly
      below 100. We need ot find whether
      government was able to keep AQI within
      the limits.
    ======================================
  */
  bool condition = X < 100;
  std::cout << (condition ? "YES" : "NO") << std::endl;
  return 0;
}
