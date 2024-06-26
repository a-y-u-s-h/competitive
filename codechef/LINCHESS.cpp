#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    double N, K;
    std::cin >> N >> K;
    std::vector<std::pair<double, double>> P;
    for (int n = 0; n < N; n++) { double Pi; std::cin >> Pi; P.push_back(std::make_pair(Pi, Pi)); }
    /*
      ======================================
        Chef wants to play a game of linear
        chess on a one-dimensional board -
        an infinite row of squares numbered
        by positive integers. In this game,
        he has a pawn, which is initially at
        a square K. There are also N other
        people (numbered 1 through N). Chef
        can choose one of them to play against.
        For each valid i, the i-th player would
        play in the following way -

        1. Take a pawn and place it on a square Pi.

        2. Repeat the following move any number
           of times: move the pawn from its current
           square Pi squares forward, i.e. from a
           square s, this player's pawn is moved
           to the square s + Pi.

        3. If this player moves their pawn to
           the square with Chef's pawn, then Chef's
           pawn is captured and he loses the game.

        Unfortunately, Chef cannot move his
        pawn during the game, making him an easy
        target for other players. Given the
        starting positions of all N + 1 players,
        find a player who can capture Chef's
        pawn in the smallest number of moves
        or determine that no player can capture
        his pawn.
      ======================================
    */

    /*
      ======================================
        If any of the Pi coincide with K,
        then they will capture the pawn in
        0 moves, so we'll have to output them.
      ======================================
    */
    auto exact = std::find_if(std::begin(P), std::end(P), [K] (auto const &Pi) { return Pi.second == K; });
    if (exact != std::end(P)) { std::cout << exact->first << std::endl; continue; }

    /*
      ======================================
        Otherwise, we'll transform P, so that
        we can get the integer n from:

        Pn = Pi + nPi (n = 0, 1, 2, 3, 4...)
        K = Pi (1 + n)
        n = (K / Pi) - 1.

        First element will be Pi, and second
        will be n describing how many moves
        it'll take for Pi to capture K. If
        it comes out negative or floating point,
        we'll remove it - those elements won't
        capture the pawn at K.
      ======================================
    */
    std::transform(std::begin(P), std::end(P), std::begin(P), [K] (auto const &Pi) { return std::make_pair(Pi.first, ((K / Pi.second) - 1)); });
    P.erase(std::remove_if(std::begin(P), std::end(P), [] (auto const &Pi) { return Pi.second < 0 || std::trunc(Pi.second) != Pi.second; }), std::end(P));
    if (P.size() == 0) { std::cout << -1 << std::endl; continue; }

    /*
      ======================================
        If we still have elements remaining,
        we'll find out the minimum among them
        and output the result.
      ======================================
    */
    auto minimum = std::min_element(std::begin(P), std::end(P), [] (auto const &a, auto const &b) { return a.second < b.second; });
    std::cout << (long long) minimum->first << std::endl;
  }
  return 0;
}
