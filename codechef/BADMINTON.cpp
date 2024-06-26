#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int P;
    std::cin >> P;
    /*
      ======================================
        Chef is playing badminton today. The
        service rules of this singles game of
        badminton are as follows:

        1) The player who starts the game
        serves from the right side of their
        court.

        2) Whenever a player wins, they serve next.

        3) If the server has won an even number of
        points during a game, then they will serve
        from right side of the service court for
        the subsequent point.

        Chef will be the one who begins the game.
        given the number of points P obtained by
        Chef at the end of the game, please determine
        how many times Chef served from the right
        side of the court.
      ======================================
    */
    int answer = 1 + (P / 2);
    std::cout << answer << std::endl;
  }
  return 0;
}
