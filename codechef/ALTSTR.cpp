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
        A binary string is called alternating
        if no two adjacent characters of the
        string are equal. Formally, a binary
        string T of length M is called
        alternating if Ti != T(i + 1) for each
        1 <= i < M. For example: 0, 1, 01, 10,
        101, 010, 1010 are alternating while
        11, 001, 1110 are not.

        You're given a binary string S of length
        N. You would like to rearrange the
        characters of S such that the length of
        the longest alternating substring of S
        is maximum. Find this maximum value.

        A binary string is a string that consists
        of characters 0 and 1. A string `a` is a
        substring of `b` if `a` can be obtained
        from `b` by deletion of several (possibly
        0 or all) cgaracters from the beginning and
        several (possibly zero or all) characters
        from the end.
      ======================================
    */
    int C0 = std::count(std::begin(S), std::end(S), '0');
    int C1 = std::count(std::begin(S), std::end(S), '1');
    int answer = std::min(C1, C0) + std::min((std::min(C1, C0) + 1), std::max(C1, C0));
    std::cout << answer << std::endl;
  }
  return 0;
}
