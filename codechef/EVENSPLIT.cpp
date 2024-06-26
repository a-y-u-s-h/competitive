#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N; std::string S;
    std::cin >> N;
    std::cin >> S;
    /*
      ======================================
        You're given a binary string S of
        length N. You can perform the following
        operation on it:

        1. Pick any non-empty even-length
           subsequence of the string.

        2. Suppose the subsequence has length 2k,
           then move the first k characters to
           the beginning of S and the other k
           to the end of S (without changing
           their order).

        What is the lexicographically smallest
        string that can be obtained after
        performing this operation several
        (possibly, zero) times?
      ======================================
    */
    /*
      ======================================
        For N == 2, the answer is S itself,
        otherwise we can simply sort S and
        output the lexicographically smaller S.
      ======================================
    */
    if (N == 2) { std::cout << S << std::endl; continue; }
    std::sort(std::begin(S), std::end(S));
    std::cout << S << std::endl;
  }
  return 0;
}
