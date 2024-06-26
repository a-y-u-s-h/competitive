#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int x1, x2, y1, y2, z1, z2;
    std::cin >> x1 >> x2 >> y1 >> y2 >> z1 >> z2;
    /*
      ======================================
        Ash is trying to get visa to Chefland.
        For the visa to be approved, he needs
        to satisfy the following three criteria.

        1. Solve at least x1 problems on codechef.
        2. Have at least y1 current rating on codechef.
        3. Make his last submission at most z1 months ago.

        You are given (x2, y2, z2) as Ash's actual parameters
        of the criteria. We need to determine whether he'll
        get the visa.
      ======================================
    */
    bool approved = (x2 >= x1) && (y2 >= y1) && (z2 <= z1);
    std::cout << (approved ? "YES" : "NO") << std::endl;
  }
  return 0;
}
