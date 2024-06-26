#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int X, Y, D;
    std::cin >> X >> Y >> D;
    /*
      ======================================
        It is the World Cup Finals. Chef only
        finds a match interesting if the skill
        difference of the competing teams
        is less than or equal to D.

        Given that the skills of the teams
        competing in the final are X and Y
        respectively, determine whether Chef
        will find the game interesting or not.
      ======================================
    */
    bool condition = std::abs(X - Y) <= D;
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
