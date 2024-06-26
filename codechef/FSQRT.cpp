#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0; i < t; i += 1) {
    int n;
    std::cin >> n;

    /*
      ======================================
        In this one we just need to print out
        square root of a number rounded to
        nearest integer in a new line.
      ======================================
    */

    std::cout << std::round(std::sqrt(n)) << std::endl;
  }
  return 0;
}
