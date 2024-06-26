#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<double> A;
    for (int n = 0; n < N; n++) { double Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        Shubman Gill is playing an international
        match. He played a total of N balls, where
        in the ith ball, he scored Ai runs.
        The strike rate of a player is calculated
        as: 100 * (Number of runs) / (Number of balls played)
        Preet, a math enthusiast is currently
        watching the match. Help him finnd the
        number of times, Shubman's strike rate
        become exactly 100.
      ======================================
    */

    std::partial_sum(std::begin(A), std::end(A), std::begin(A));
    std::transform(std::begin(A), std::end(A), std::begin(A), [&A](auto const &Ai) { int index = &Ai - &A[0]; return Ai * 100 / (index + 1); });
    auto answer = std::count_if(std::begin(A), std::end(A), [](auto const &Ai) { return Ai == 100; });
    std::cout << answer << std::endl;
  }
  return 0;
}
