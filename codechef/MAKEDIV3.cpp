#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        Given an integer N, help Chef in
        finding an N-digit odd positive
        integer X such that X is divisible
        by 3 but not by 9. Note: There
        should not be any leading zeroes
        in X. In other words, 003 is not
        a valid 3-digit odd positive integer.
      ======================================
    */

    if (N == 1) { std::cout << 3 << std::endl; continue; }
    std::cout << 3; for (int i = 1; i < N - 1; i++) { std::cout << 0; } std::cout << 3 << std::endl;

  }
  return 0;
}
