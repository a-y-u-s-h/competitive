#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int64_t N;
    std::cin >> N;
    std::vector<int64_t> A;

    /*
      ======================================
        For every test case, we're given
        a vector, we need to find out the
        pair that has the smallest possible
        sum. So we just sort it and return
        the sum of first two elements.
      ======================================
    */
    for (int64_t n = 0; n < N; n += 1) {
      int64_t Ai;
      std::cin >> Ai;
      A.push_back(Ai);
    }

    std::sort(std::begin(A), std::end(A));
    int64_t answer = A[0] + A[1];
    std::cout << answer << std::endl;
  }
  return 0;
}
