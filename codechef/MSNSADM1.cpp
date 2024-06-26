#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::map<int, int> P;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; P[n] = P[n] + Ai * 20              ; }
    for (int n = 0; n < N; n++) { int Bi; std::cin >> Bi; P[n] = std::max(P[n] - Bi * 10, 0) ; }
    /*
      ======================================
        You are given two sequences A and B,
        for each valid i, player i scored Ai
        goals and committed Bi fouls. For each
        goal, the player that scored gets 20
        points, and for each foul, 10 points
        are deducted from the player that
        commmitted it. However, if the resulting
        number of points of some player is negative,
        this player will be considered to have 0
        points.

        You need to calculate the total number
        of points gained by each player and tell
        Alex the maximum of these values.
      ======================================
    */
    auto maximum = *std::max_element(std::begin(P), std::end(P), [](auto &a, auto &b) { return b.second > a.second; });
    auto answer = maximum.second;
    std::cout << answer << std::endl;
  }
  return 0;
}
