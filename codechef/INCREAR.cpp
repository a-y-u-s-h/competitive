#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Chef has two integers X and Y. Chef
        wants to perform some operations to
        make X and Y equal. In one operation,
        Chef can either:
        1. Set X := X + 1.
        2. Set Y := Y + 2.
        Find the minimum number of operations
        required to make X and Y equal.

        Given: X, Y, P = 1, Q = 2.

        Let's imagine them on number line so
        that we can make sense of it visually.
      ======================================
    */
    int distance = std::abs(Y - X);
    int answer = Y > X ? (distance / 1) : Y < X ? 2 * (distance % 2) + (distance / 2) : 0;
    std::cout << answer << std::endl;
  }
  return 0;
}
