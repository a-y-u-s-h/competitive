#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Chef recently started selling a special
        fruit. He has been selling the fruit
        for X rupees (X is a multiple of100).
        He earns a profit of Y rupees on selling
        the fruit currently.

        Chef decided to increase the selling price
        by 10%. Please help him calculate his new
        profit after the increase in selling price.

        Note that only the selling price has
        been increased and the buying price
        is same.

        S1 - B1 = P1 => X - B = Y => B = X - Y
        S2 - B2 = P2 => (1.1 * X) - B = ? => ? = X (1.1 - 1) + Y
      ======================================
    */

      int answer = (0.1 * X) + Y;
      std::cout << answer << std::endl;
  }
  return 0;
}
