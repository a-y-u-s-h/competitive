#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int64_t N, M;
    std::cin >> N >> M;
    std::vector<int64_t> A;

    /*
      ======================================
        Chef has an array A of size N and
        an integer M, such that 1 <= Ai <= M
        for every 1 <= i <= N. The formula for
        distance of an array B from array A is
        provided in the question. Chef
        wants an array B of size N, such that
        1 <= Bi <= M and the value d(A, B)
        is as large as possible, i.e. the
        distance of B from A is maximum. Find
        the maximum distance for any valid
        array B.
      ======================================
    */

    int64_t answer = 0;

    for (int64_t n = 0; n < N; n++) {
      int64_t Ai;
      std::cin >> Ai;
      answer += M - Ai > Ai - 1 ? M - Ai : Ai - 1;
    }

    std::cout << answer << std::endl;
  }
  return 0;
}
