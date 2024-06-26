#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int L, R;
    std::cin >> L >> R;
    /*
      ======================================
        You're given a range of integers
        {L, L + 1, L + 2...R}. An integer X
        is said to be reachable if it
        can be represented as a sum of two
        not necessarily distinct integers in
        this range. Find the number of
        distinct reachable integers.
      ======================================
    */

    std::cout << (2 * R) - (2 * L) + 1 << std::endl;

  }
  return 0;
}
