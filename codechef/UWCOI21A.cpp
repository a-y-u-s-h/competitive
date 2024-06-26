#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int64_t N;
    std::cin >> N;
    /*
      ======================================
        Given an integer N, we need to output
        any two numbers A, B such that N = A * B
        Either A or B can be 1. So it's an
        easy AF question.

        Let's just put A = 1 and B = N. No need
        to assign variable names to them either.
      ======================================
    */
    std::cout << 1 << " " << N << std::endl;
  }
  return 0;
}
