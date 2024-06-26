#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    float g, c;
    std::cin >> g >> c;
    /*
      ======================================
      In Chefland, the speed of light is c m/s,
      and acceleration due to gravity is g m/s2.

      Find the smallest height (in meters) from
      which Chef should jump such that during his
      journey down only under the effect of gravity
      and independent of any air resistance,
      he achieves the speed of light and verifies
      Einstein's theory of special relativity.

      Assume he jumps at zero velocity and at any time,
      his velocity (v) and depth of descent (H) are related as
      v^2 = 2⋅g⋅H.

      It is given that 2g divides c^2
      ======================================
    */

    float h = std::pow(c, 2) / (2 * g);
    std::cout << std::fixed << std::setprecision(0) << h << std::endl;
  }
  return 0;
}
