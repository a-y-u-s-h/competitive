#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    double x1, y1, x2, y2;
    std::cin >> x1 >> x2 >> y1 >> y2;
    /*
      ======================================
        Chef is planning to buy a new car for
        his birthday. After a long search, he
        is left with 2 choices:
        1) Runs of diesel with fuel economy of x1 km/l.
        2) Runs of petrol with fuel economy of x2 km/l.

        Chef also knows that:
        1) Current price of diesel is y1 Rs/l.
        2) Current price of petrol is y2 Rs/l.

        Assuming that both cars cost the same
        and that the price of fuel remains constant,
        which car will minimize Chef's expenses?
      ======================================
    */

    std::string answer = (x1 / y1) <  (x2 / y2) ? "1"
                       : (x1 / y1) >  (x2 / y2) ? "-1"
                       : (x1 / y1) == (x2 / y2) ? "0" : "";

    std::cout << answer << std::endl;
  }
  return 0;
}
