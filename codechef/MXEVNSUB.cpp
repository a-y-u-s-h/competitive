#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        You're given an integer N. Consider the
        sequence containing the integers 1, 2...N.
        in increasing order (each exactly once).
        Find the maximum length of contiguous
        subsequence with an even sum.
      ======================================
    */
    int answer = (N * (N + 1) / 2) % 2 == 0 ? N : N - 1;
    std::cout << answer << std::endl;
  }
  return 0;
}
