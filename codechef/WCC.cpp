#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;

  for (int t = 0 ; t < T; t += 1) {
    int X; std::string R;
    std::cin >> X;
    std::cin >> R;

    /*
      ======================================
        The World Chess Championship 2022
        is about to start. 14 Classical
        Games will be played between Chef
        and Carlsen in the Championship,
        where each game has one of three
        outcomes - It can be won by Carlsen,
        won by Chef or it can be a draw. The
        winner of a game gets 2 points, and
        the loser gets 0 points. If it's a
        draw, both player get 1 point each.

        The total prize pool of the championship
        is 100 * X. At the end of 14 classical
        games, if one player has strictly more
        points than the other, he is declared
        the champion and gets 60 * X as his
        prize money and the loser gets 40 * X.

        IF the total points are tied, then the
        defending champion Carlsen is declared
        the winner. However, if this happens,
        the winner gets only 55 * X and the loser
        gets 45 * X. Given the results of all
        the 14 games, output the prize money.

        C denotes victory by Carlsen.
        N denotes victory by Chef.
        D denotes Draw.
      ======================================
    */

    int CC = std::count(std::begin(R), std::end(R), 'C');
    int CN = std::count(std::begin(R), std::end(R), 'N');
    int CD = std::count(std::begin(R), std::end(R), 'D');

    int answer = CC >  CN ? 60 * X
               : CC <  CN ? 40 * X
               : 55 * X;

    std::cout << answer << std::endl;

  }
  return 0;
}
