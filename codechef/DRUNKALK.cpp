#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int K;
    std::cin >> K;
    /*
      ======================================
        For every 3 steps forward, Chef ends
        up walking one step backward because
        he is drunk. How far from initial
        position will Chef be after K seconds
        have passed? Assume that his initial
        position is 0.

        Formally, in the 1st second he moves
        3 steps forward, in the 2nd second he
        moves 1 step backwards, in the 3rd second
        he moves 3 steps foward, in the 4th second
        1 step backwards and so on.
      ======================================
    */
    std::vector<int> seconds (K); std::iota(std::begin(seconds), std::end(seconds), 1);
    std::transform(std::begin(seconds), std::end(seconds), std::begin(seconds), [](auto const &second) { return second % 2 == 1 ? 3 : -1; });
    auto answer = std::accumulate(std::begin(seconds), std::end(seconds), 0);
    std::cout << answer << std::endl;
  }
  return 0;
}
