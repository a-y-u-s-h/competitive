#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int A, B, C, D;
    std::cin >> A >> B;
    std::cin >> C >> D;
    /*
      ======================================
        Chef is watching a football match.
        Current score is A : B, that is:
        Team 1 has scored A goals and Team 2
        has scored B goals. Chef wonders if it
        is possible for the score to become C : D
        at a later point in the game (i.e. Team 1
        has scored C goals and Team 2 has scored D
        goals). Can you help  Chef by answering
        his questions?
      ======================================
    */
    bool condition = (C >= A && D >= B);
    std::cout << (condition ? "POSSIBLE" : "IMPOSSIBLE") << std::endl;
  }
  return 0;
}
