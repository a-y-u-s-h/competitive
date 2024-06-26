#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    double N;
    std::cin >> N;
    /*
      ======================================
        A football leaguee of N teams is taking
        place, where each team plays other teams
        once in single round robin fashion. A
        team gets 3 points for winning a game
        and 0 points for losing (assume that no
        games result in draws). What is the
        maximum possible difference of points between
        winning team and the second placed team?
      ======================================
    */
    int answer = 3 * (N - 1) - (3 * std::ceil((N - 2) / 2));
    std::cout << answer << std::endl;
  }
  return 0;
}
