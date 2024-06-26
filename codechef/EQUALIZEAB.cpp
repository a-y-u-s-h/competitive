#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int64_t A, B, X;
    std::cin >> A >> B >> X;
    /*
      ======================================
        You're given two numbners A and B
        along with an integer X. In one
        operation you can do the following:

        1) Set A = A + X and B = B - X;
        2) Set A = A - X and B = B + X;

        Determine if you can make A and B
        equal after applying the operation
        any number of times (possibly zero).
      ======================================
    */
    bool condition = (B - A) % (2 * X) == 0;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
