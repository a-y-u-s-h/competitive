#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int X, Y, Z;
    std::cin >> X >> Y >> Z;

    /*
      ======================================
        RCB has earned X points in games it
        has played so far. To qualify for playoffs
        they must earn at least a total of Y points.
        They currently have Z games left. In each game
        they earn 2 points for a win, 1 point for a draw
        and no points for a loss.

        Is it possible for RCB to qualify for playoffs?

        Since there are Z games remaining, if we assume that
        RCB wins all of them, we'll get the maximum amount of
        points that they can obtain = 2 * Z.

        They need (Y - X) points to win, so if 2Z is
        greater than (Y - X) they have a possibility of
        qualifying for the playoffs.
      ======================================
    */
    bool qualifiable = (2 * Z >= (Y - X));
    std::cout << (qualifiable ? "YES" : "NO") << std::endl;
  }
  return 0;
}
