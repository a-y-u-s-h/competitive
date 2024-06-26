#include <bits/stdc++.h>

bool primality (int N) {
  if (N <= 1) return false;
  for (int i = 2; i <= std::sqrt(N); i += 1) { if (N % i == 0) return false; }
  return true;
}

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int64_t m, n;
    std::cin >> m >> n;
    /*
      ======================================
        Ram wants to generaate some prime
        numbers for his cryptosystem. Help
        him please! Your task is to generate
        all prime numbers between two given
        numbers. Warning: large IO data, be
        careful with certain languages, though
        most should be OK if the algorithm
        is well designed.
      ======================================
    */

    for (int64_t i = m; i <= n; i += 1) { if (primality(i)) std::cout << i << std::endl; }
    std::cout << std::endl;

  }
  return 0;
}
