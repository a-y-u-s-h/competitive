#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, X;
    std::cin >> N >> X;

    std::vector<int> A;
    for (int n = 0; n < N; n++) {
      int Ai; std::cin >> Ai;
      A.push_back(Ai);
    }

    /*
      ======================================
        Set A contains ages of N people (Ai).
        There's an eligibility criteria based
        on age that decides whether someone
        is eligible to vote. Person needs to
        be at least X years old to vote. Find
        the number of eligible voters.
      ======================================
    */

    auto answer = std::count_if(std::begin(A), std::end(A), [X](auto const &Ai) { return Ai >= X; });
    std::cout << answer << std::endl;
  }
  return 0;
}
