#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, M;
    std::cin >> N >> M;
    /*
      ======================================
        Rushitote went to a programming contest
        to distribute apples and oranges
        to the contestants. He has N apples
        and M oranges, which need to be divided
        equally amongst the contestants. Find
        the maximum possible number of
        contestants such that:

        1) Every contestant gets an equal
           number of apples; and,
        2) Every contestant gets an equal
           number of oranges.

        Note that, every fruit with Rushitote
        must be distributed, there can be any
        left over.
      ======================================
    */
    int answer = std::min(std::min(N, M), std::gcd(N, M));
    std::cout << answer << std::endl;
  }
  return 0;
}
