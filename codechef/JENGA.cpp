#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, X;
    std::cin >> N >> X;
    /*
      ======================================
        There are N people at a party. N people
        decide to play Jenga. There are X Jenga
        tiles available. In one round, all
        the players pick 1 tile each and place it
        on the tower. The game is valid, if
        1. All players have a tile in each round.
        2. All the tiles are used at the end.
        Given N and X, find whether the game is valid.
      ======================================
    */
    bool condition = ((X / N) > 0) && (X % N == 0);
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
