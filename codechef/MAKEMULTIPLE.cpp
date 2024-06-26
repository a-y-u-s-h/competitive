#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long A, B;
    std::cin >> A >> B;
    /*
      ======================================
        Chef has two integers A and B (A <= B).
        Chef can choose any non-negative integer
        X and add them to both A and B. Find whehter
        it is possible to make A a divisor of B.

        Which means, B % (A + x) must be zero.
        So, we should try the naive approach
        first, make a loop and see if it's possible
        to do that.
      ======================================
    */
    bool condition = B == A || B - A >= A;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
