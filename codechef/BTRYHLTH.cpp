#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        Apple considers any iPhone with a
        battery health of 80% or above to be
        in optimal condition. Given that your
        iPhone has X% battery health, find
        whether it is in optimal condition.
      ======================================
    */
    bool condition = X >= 80;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
