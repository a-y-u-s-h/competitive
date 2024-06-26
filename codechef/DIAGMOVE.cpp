#include <bits/stdc++.h>


int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int64_t x, y;
    std::cin >> x >> y;

    /*
      ======================================
        Let's consider an initial point (p, q)
        that we want to convert to another point (x, y).
        We can apply four operations on that point to
        convert it into (x, y):

        * f1(p, q) = (p + a1, q + b1)
        * f2(p, q) = (p + a2, q + b2)
        * f3(p, q) = (p + a3, q + b3)
        * f4(p, q) = (p + a4, q + b4)

        If we chain these functions, we can chain
        them in any order (the result will remain same).
        To obtain (x, y) from (p, q) we don't know
        how many times a certain function will be
        used in the chain, so we assume their frequencies
        in the chain as: f1 repeats u1 times, f2
        repeats u2 times and so on. If we do this:

        x = p + u1a1 + u2a2 + u3a3 + u4a4
        y = q + u1b1 + u2b2 + u3b3 + u4b4

        For our problem, p = 0, q = 0 and since
        we can only move diagonally one square, we get:
        a1 = 1, b1 = 1
        a2 = -1, b2 = -1
        a3 = 1, b3 = -1
        a4 = -1, b4 = 1

        If we put these values, we get:

        x = u1 - u2 + u3 - u4
        y = u1 - u2 - u3 + u4

        This implies:

        (x + y) = 2 * I (some integer)
        (x - y) = 2 * I (some integer)

        So, basically given a point (x, y) we need to check
        whether sum and difference of x and y is divisible by 2.
        If it is, then it's possible to reach (x, y) from (0, 0)
        with the operations given to us.
      ======================================
    */

    int64_t sum = x + y;
    int64_t difference = x - y;
    bool answer = (sum % 2 == 0) && (difference % 2 == 0);
    std::cout << (answer ? "YES" : "NO") << std::endl;
  }
  return 0;
}
