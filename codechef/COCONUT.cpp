#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    float xa, xb, Xa, Xb;
    std::cin >> xa >> xb >> Xa >> Xb;

    /*
      ======================================
        Chefland has two different types
        of coconuts - A and B. Type A contains
        'xa' milliliters of water and type B contains
        'xb' grams of coconut pulp.

        Chef's nutritionist has advised him to consume
        Xa millileters of coconut water and Xb grams
        of coconut pulp every week in summer. We
        need to find total number of coconuts (Type A + Type B)
        that Chef should buy each week to keep himself active
        in the hot weather.

        Solution is simple - we just need to divide and
        instead of taking floor, we need to ciel the answer
        to determine the minimum number of coconuts he would need.
      ======================================
    */
    int Na = std::ceil(Xa / xa);
    int Nb = std::ceil(Xb / xb);
    std::cout << (Na + Nb) << std::endl;
  }
  return 0;
}
