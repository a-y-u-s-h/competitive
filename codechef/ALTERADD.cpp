#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long A, B;
    std::cin >> A >> B;
    /*
      ======================================
        Chef has 2 numbers A and B (A < B).
        Chef will perform some operations on A.
        In the i-th operation:
        1. Chef will add 1 to A if i is odd.
        2. Chef will add 2 to A if i is even.

        Chef can stop at any instant. Can chef
        make A equal to B?

        Approach: Pattern recognition of missing
        numbers from differences of A and B.
      ======================================
    */
    bool condition = (B - A - 2) % 3 != 0;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
