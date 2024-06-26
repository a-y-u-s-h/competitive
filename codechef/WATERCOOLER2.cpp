#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        The summer is at its peak in Chefland.
        Chef is planning to purchase a water
        cooler to keep his room cool. He has
        two options available:

        1. Rent a cooler at the cost of X coins per month.
        2. Purchase a cooler for Y coins.

        Chef wonders what is the maximum number of months
        for which he can rent the cooler such that
        the cost of renting is strictly less
        than the cost of purchasing it.
      ======================================
    */
    int answer = Y % X == 0 ? std::floor(Y / X) - 1 : std::floor(Y / X);
    std::cout << answer << std::endl;
  }
  return 0;
}
