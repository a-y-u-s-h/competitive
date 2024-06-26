#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, M;
    std::cin >> N >> M;
    std::string S, K;
    std::cin >> S >> K;
    /*
      ======================================
        Chef bought a new digital lock, but
        it is quite suspicious of its actual
        strength in keeping out pesky thieves.
        So, he wants to find out how quickly
        he can open the lock. The digital lock
        works as follows:

        - On its screen, there is a string of
          digits S of length N.
        - There is also a secret code K of
          length M (1 <= M <= 10), which acts
          as the key to the lock. The lock
          will open if K is present anywhere
          in S as contiguous substring.

        Operating the lock is simple: Chef can
        choose an index i and either increment
        Si by 1 or decrement Si by 1. Here,
        the digits are cyclic, following the
        order 0 -> 1 -> 2 -> ... -> 8 -> 9 -> 0...
        In particular, incrementing 9 will turn
        it into 0 and decrementing 0 will
        turn it into 9. You're given S and K,
        What's the minimum number of moves Chef
        needs to open the lock.
      ======================================
    */

    int answer = INT_MAX;

    for (int i = 0; i <= S.length() - M; i += 1) {

      std::string Si = S.substr(i, M); int distance = 0;

      for (int j = 0; j < M; j++) {
        int a = std::abs(Si[j] - K[j]);
        int b = std::abs('9' - Si[j] + 1) + std::abs(K[j] - '0');
        int c = std::abs(Si[j] - '0') + std::abs('9' - K[j] + 1);
        distance += (std::min(std::min(a, b), c));
      }

      answer = std::min(distance, answer);
    }

    std::cout << answer << std::endl;
  }
  return 0;
}
