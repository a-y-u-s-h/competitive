#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  /*
    ======================================
      In a coding contest, there are prizes for the top rankers.
      The prize scheme is as follows:
      1. Top 10 participants receive rupees X each.
      2. Participants with rank 11 to 100 (both inclusive) receive rupees Y each.

      Find the total prize money over all the contestants (10X + 90Y)
    ======================================
  */
  for (int t = 0; t < T; t += 1) {
    int X, Y;
    std::cin >> X >> Y;
    std::cout << (10 * X + 90 * Y) << std::endl;
  }
  return 0;
}
