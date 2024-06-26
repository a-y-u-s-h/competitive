#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;

    std::vector<int> D;
    for (int n = 0; n < N; n++) {
      int Di; std::cin >> Di;
      D.push_back(Di);
    }

    /*
      ======================================
        Chef has added N problems to his list.
        Each of those problems have a difficulty
        associated with them. He accidentally has added
        problems without looking at difficulty rating.
        Chef should only solve problems with difficulty
        rating < 1000, because he's a beginner.
        We need to find out how many problems
        should he remove from his list.
      ======================================
    */

    auto answer = std::count_if(std::begin(D), std::end(D), [](auto const &Di) { return Di >= 1000; });
    std::cout << answer << std::endl;

  }
  return 0;
}
