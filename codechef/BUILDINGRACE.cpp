#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    float A, B, X, Y;
    std::cin >> A >> B >> X >> Y;
    /*
      ======================================
        Two friends Chef and Chefina are
        currently on floors A and B respectively.
        They hear an announcement that prizes
        are being distributed on the ground
        floor and so decide to reach the ground
        floor as soon as possible.

        Chef can climb down X floors per minute
        while Chefina can climb down Y floors per
        minute. Determine who will reach the
        ground floor first (ie. floor number 0).
        In case both reach the ground floor
        together, print Both.
      ======================================
    */
    std::string answer = (A / X) > (B / Y) ? "CHEFINA"
                       : (A / X) < (B / Y) ? "CHEF"
                       : "BOTH";

    std::cout << answer << std::endl;
  }
  return 0;
}
