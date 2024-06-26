#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X;
    std::cin >> X;
    /*
      ======================================
        In Chefland, denominations less
        than rupees 10 have stopped and now
        rupees 10 is the smallest denomination.
        Suppose, Chef goes to buy some item
        with cost not a multiple of 10, then,
        he will be charged the cost that is
        the nearest multiple of 10. If the
        cost is equally distant from two
        nearest multiples of 10, then the
        cost is rounded up. For example, 35,
        38, 40, 44 are all rounded to 40.

        Chef purchased an item having cost X
        (X <= 100) and gave a bill of rupees 100.
        How much amount will he get back?
      ======================================
    */
    int charged = (X % 10 < 5) ? (10 * (X / 10)) : (10 * ((X + 10) / 10));
    int answer = 100 - charged;
    std::cout << answer << std::endl;
  }
  return 0;
}
