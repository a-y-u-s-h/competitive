#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    float H, X, Y;
    std::cin >> H >> X >> Y;
    /*
      ======================================
        Chef is playing a video game, and is
        now fighting the final boss. The boss has
        H health points. Each attack of Chef reduces
        the health of the boss by X. Chef also has
        a special attack that can be used at most
        once, and will decrease the health of
        the boss by Y. Chef wins when the health
        of the boss is ≤ 0. What is the minimum
        number of attacks needed by Chef to win?
      ======================================
    */
    int answer = H > Y ? 1 + std::ceil((H - Y) / X) : 1;
    std::cout << answer << std::endl;
  }
  return 0;
}
