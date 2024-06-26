#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int A, B, C;
    std::cin >> A >> B >> C;
    /*
      ======================================
        In discus throw, a player is given 3
        throws and the throw with the longest
        distance is regarded as their final
        score. You're given the distances
        for all 3 throws of a player. Determine
        the final score of the player.
      ======================================
    */
    int scores[3] = {A, B, C};
    auto answer = *std::max_element(std::begin(scores), std::end(scores));
    std::cout << answer << std::endl;
  }
  return 0;
}
