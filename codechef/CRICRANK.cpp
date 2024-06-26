#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int R1, W1, C1;
    int R2, W2, C2;
    std::cin >> R1 >> W1 >> C1;
    std::cin >> R2 >> W2 >> C2;
    /*
      ======================================
        R1, W1, C1 are stats for player A.
        R2, W2, C2 are stats for player B.
        The person who is better than the
        other in most statistics is regarded
        as the better overall player. Tell
        who is better amongst A and B. It
        is known that in each statistic, the
        players have different values.
      ======================================
    */
    std::vector<char> scoresheet;
    std::vector<int> A = { R1, W1, C1 };
    std::vector<int> B = { R2, W2, C2 };
    std::transform(std::begin(A), std::end(A), std::begin(B), std::back_inserter(scoresheet), [](auto const &a, auto const &b) { return a > b ? 'A' : b > a ? 'B' : 'N'; });
    int CA = std::count(std::begin(scoresheet), std::end(scoresheet), 'A');
    int CB = std::count(std::begin(scoresheet), std::end(scoresheet), 'B');
    std::cout << (CA > CB ? "A" : "B") << std::endl;
  }
  return 0;
}
