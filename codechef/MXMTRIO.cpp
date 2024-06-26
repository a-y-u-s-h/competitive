#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N;
    std::cin >> N;
    std::vector<long long> A;
    for (long long n = 0; n < N; n++) { long long Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        You're given an array A of N elements.
        For any ordered triplet (i, j, k) such
        that i, j and k are pairwise distinct
        and 1 <= i, j, k <= N. the value of
        this triplet is (Ai - Aj) * Ak. You
        need to find the maximum value among
        all the possible ordered triplets.

        Note: Two ordered triplets (a, b, c)
        and (d, e, f) are only equal when a = d
        and b = e and c = f. As an example (1, 2, 3)
        and (3, 2, 1) are two different ordered
        triplets.
      ======================================
    */

     /*
       ======================================
         Approach: To maximize the expression
         (Ai - Aj) * Ak, where i, j, k are
         distinct, we need to set Aj as the
         minimum element of A. Ak as the maximum
         element of A. And if frequency of Ak
         is greater than 1, then Ai can be equal
         to Ak otherwise Ai will be the 2nd
         highest element of A. Also, take care of
         edge cases, like Ai should not equal Aj.
       ======================================
     */
      std::sort(std::begin(A), std::end(A));
      auto L = A[0]; auto M = A[N - 2]; auto R = A[N - 1];
      auto answer = std::max(R * (M - L), M * (R - L));
      std::cout << answer << std::endl;
  }
  return 0;
}
