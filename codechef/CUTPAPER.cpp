#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, K;
    std::cin >> N >> K;
    /*
      ======================================
        Chef has a square shaped chart paper
        with the side length equal to N. He
        wants to cut out K x K squares from
        his chart paper. Find the maximum
        number of K x K squares he can cut
        from the entire chart paper.

        Note: some part of the chart paper
        might not be included in any
        K x K output square.
      ======================================
    */
    int answer = std::pow(N / K, 2);
    std::cout << answer << std::endl;
  }
  return 0;
}
