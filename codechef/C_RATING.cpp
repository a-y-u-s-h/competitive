#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    float X, Y;
    std::cin >> X >> Y;
    /*
      ======================================
        Alice has recently started playing Chess.
        Her current rating is X. She noticed
        that when she wins a game, her rating
        increases by 8 points. Can you help Alice
        in finding out the minimum number of games
        she needs to win in order to make her
        rating greater than or equal to Y?
      ======================================
    */
    int answer = Y > X ? std::ceil((Y - X) / 8) : 0;
    std::cout << answer << std::endl;
  }
  return 0;
}
