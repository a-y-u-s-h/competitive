#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    double X, Y, N, R;
    std::cin >> X >> Y >> N >> R;
    /*
      ======================================
        Chef is very hungry. So, Chef goes
        to a shop selling burgers. The shop
        has 2 types of burgers: Normal burgers,
        which cost X rupees each. And Premium
        burgers which cost Y rupees each (Y > X).
        Chef has R rupees. Chef wants to buy
        exactly N burgers. He also wants to
        maximize the premium burgers he buys.
        Determine the number of burgers of both
        types Chef must buy.

        aX + bY = min(N * Y, R) and a + b == N
        (N - b)X + bY <= R
        NX + b(Y - X) <= R
        b <= (R - NX) / (Y - X)
        a = N - b = (NY - R) / (Y - X)
      ======================================
    */

    double b = std::floor((std::min(N * Y, R) - N * X) / (Y - X));
    double a = std::ceil((N * Y - std::min(N * Y, R)) / (Y - X));
    if (a < 0 || b < 0) { std::cout << "-1" << std::endl; } else { std::cout << a << " " << b << std::endl; }
  }
  return 0;
}
