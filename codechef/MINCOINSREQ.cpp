#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        There are only 2 types of denominations
        in Chefland:
        1. Coins worth Rs. 1 each.
        2. Notes worth Rs. 10 each.

        Chef wants to pay his friend exactly
        Rs. X. What is the minimum number of *coins*
        Chef needs to pay exactly X rupees.
      ======================================
    */
    int answer = (X % 10);
    std::cout << answer << std::endl;
  }
  return 0;
}
