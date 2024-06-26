#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0; i < t; i += 1) {
    int N;
    std::cin >> N;

    /*
      ======================================
        A simple program that -
        1. Prints "Thanks for helping Chef!" if N < 10
        2. Prints -1 otherwise.
      ======================================
    */

    if (N < 10) {
      std::cout << "Thanks for helping Chef!" << std::endl;
    } else {
      std::cout << (-1) << std::endl;
    }
  }
  return 0;
}
