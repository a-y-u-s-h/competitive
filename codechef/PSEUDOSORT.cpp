#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int64_t N;
    std::cin >> N;
    std::vector<int64_t> A;
    for (int64_t n = 0; n < N; n++) { int64_t Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        An array A of length N is said to be
        pseudo-sorted if it can be made
        non-decreasing after performing the
        following operation at most once:

        Choose an i such that 1 <= i <= N - 1
        aand swap Ai and A(i + 1).

        Given an array A, determine if it is
        pseudo-sorted or not.
      ======================================
    */

    for (int i = 0; i < N - 1; i += 1) {
      if (A[i] > A[i + 1]) {
        std::iter_swap(std::begin(A) + i, std::begin(A) + i + 1);
      }
    }

    bool condition = std::is_sorted(std::begin(A), std::end(A));
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
