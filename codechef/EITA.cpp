#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int d, x, y, z;
    std::cin >> d >> x >> y >> z;
    /*
      ======================================
        In Chefland, there are 7 days in a week.

        Chef can spend his energy during the week
        in 2 following ways:

        1) Doing x units of work per day. (Total work done: W1)

        2) Doing y (> x) units of work for first d (< 7)
        days and do z (< x) units of work thereafter
        since he will get tired of working more in the
        initial few days. (Total work done: W2)

        We need to find the maximum amount
        of work he can do during the week if he's
        free to choose either of the two strategies.
      ======================================
    */

    int W1 = 7 * x;
    int W2 = (y * d) + z * (7 - d);
    int maximum = std::max(W1, W2);
    std::cout << maximum << std::endl;
  }
  return 0;
}
