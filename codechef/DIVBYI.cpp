#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N;
    std::cin >> N;
    /*
      ======================================
        You're given an integer N. Construct
        a permutation P of length N such that,
        For all i (1 <= i <= N - 1), i divides
        |P(i + 1) - Pi|. Recall that a permutation
        of length N is an array where every
        integer from 1 to N occurs exactly once.
        It can be proven that for the given
        constraints at least one such P
        always exists.

        Approach: You have to construct the
        sequence with some for-loop trickery
        after identifying the pattern.
      ======================================
    */

    std::vector<int> P (N);

   for (int i = N - 1, L = 1, R = N; i >= 0; i--) {
       if (i % 2 == 0) {
           P[i] = L++;
       } else {
           P[i] = R--;
       }
   }

    for (auto i : P) { std::cout << i << " "; } std::cout << std::endl;
  }
  return 0;
}
