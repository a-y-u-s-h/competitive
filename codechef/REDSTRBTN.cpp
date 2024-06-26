#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X, Y, Z;
    std::cin >> X >> Y >> Z;
    /*
      ======================================
        Alice, Bob and Charlie have X, Y, Z
        chocolates respectively. Find whether
        you can redistribute the chocolates
        such that:

        1) Each person has at least one chocolate.
        2) No two people have same number of chocolates.
        3) No chocolate is left after redistribution.
      ======================================
    */
    if (X + Y + Z < 6) { std::cout << "NO" << std::endl; continue; }
    std::cout << "YES" << std::endl;

  }
  return 0;
}
