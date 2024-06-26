#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Chef has invested his money at an
        interest rate of X percent per annum,
        while the current inflation rate is
        Y percent per annum. An investment
        is called good if and only if the
        interest rate of the investment is
        at least twice of the inflation rate,
        Determine whether the investment made
        by Chef is good or not.
      ======================================
    */
    bool condition = X >= 2 * Y;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
