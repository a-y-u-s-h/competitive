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
        We're given a binary string S, of
        length N. In one operation we can
        select a substring of S and reverse it.
        For example, on reversing the
        substring S[2, 4] for S = 11000, we
        change 1[100]0 -> 1[001]0. Find the
        minimum number of iperations required to
        sort this binary string. It can be
        proven that the string can always
        be sorted using the above operation
        finite number of times.

        Just need to count the number of "10"
        substrings in the given binary string
        provided.
      ======================================
    */

    int answer = 0;
    for (int i = 0; i < N - 1 + 1; i += 1) { if (S[i] == '1' && S[i + 1] == '0') answer++; }
    std::cout << answer << std::endl;
  }
  return 0;
}
