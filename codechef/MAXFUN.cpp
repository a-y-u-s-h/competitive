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
        You're given a sequence A1, A2,...An.
        Find the maximum value of the expression:
        |Ax - Ay| + |Ay - Az| + |Az - Ax| all
        over all truples of pairwise distinct
        valid indices (x, y, z).
      ======================================
    */
    std::sort(std::begin(A), std::end(A));
    long long R = A[N - 1];
    long long L = A[0];
    long long M = A[1];
    long long answer = std::abs(R - L) + std::abs(M - L) + std::abs(R - M);
    std::cout << answer << std::endl;
  }
  return 0;
}
