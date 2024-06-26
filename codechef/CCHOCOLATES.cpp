#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X, Y, Z;
    std::cin >> X >> Y >> Z;
    /*
      ======================================
        Chef has X Rs. 5 coins and Y Rs. 10
        coins. Chef goes to a shop to buy
        chocolates for Chefina where each
        chocolate costs Rs. Z. Find the
        maximum number of chocolates that Chef
        can buy for Chefina.
      ======================================
    */
    int answer = (5 * X + 10 * Y) / Z;
    std::cout << answer << std::endl;
  }
  return 0;
}
