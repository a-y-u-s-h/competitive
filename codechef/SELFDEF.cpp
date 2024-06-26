#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;

    std::vector<int> A;
    for (int n = 0; n < N; n++) {
      int Ai; std::cin >> Ai;
      A.push_back(Ai);
    }

    /*
      ======================================
        Only condition for a woman to be
        eligible for the special training is that
        she must be between 10 and 60 years of
        age, inclusive of both 10 and 60.
        Given ages of N women, find how many of
        them are eligible.
      ======================================
    */

    auto answer = std::count_if(std::begin(A), std::end(A), [](auto const &Ai) { return Ai >= 10 && Ai <= 60; });
    std::cout << answer << std::endl;

  }
  return 0;
}
