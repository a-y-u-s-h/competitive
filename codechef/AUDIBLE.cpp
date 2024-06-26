#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        Chef's dog "binary" hears frequencies
        starting from 67Hz to 45000Hz (both inclusive).
        If Chef's commands have a frequency of XHz,
        find whether binary can hear them or not.
      ======================================
    */
    bool audible = X >= 67 && X <= 45000;
    std::cout << (audible ? "YES" : "NO") << std::endl;
  }
  return 0;
}
