#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  long long T;
  std::cin >> T;
  for (long long t = 0 ; t < T; t += 1) {
    long long N; std::string S;
    std::cin >> N;
    std::cin >> S;
    /*
      ======================================
        You're given a binary string S of
        length N. You have to perform the
        following operation exactly once:

        Select an index i (1 <= i <= N) and
        delete Si from S. The remaining parts
        of S are concatenated in the same order.

        How many distinct binary strings of
        length N - 1 can you get after applying
        this operation?

        Approach: A distinct binary string
        corresponds to unique transition between
        '0' and '1' so we can simply count
        the number of transitions between 0 and 1.
      ======================================
    */
    long long answer = 1;
    for (int i = 1; i < N; i += 1) { if (S[i] != S[i - 1]) answer++;  }
    std::cout << answer << std::endl;
  }
  return 0;
}
