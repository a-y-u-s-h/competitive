#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Doctor prescribed Chef to take a
        multivitamin tablet 3 times a day for
        the next X days. Chef already has Y
        multivitamin tablets. Determine if
        Chef has enough tablets for these X
        days or not.
      ======================================
    */
    bool condition = (Y >= X * 3);
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
