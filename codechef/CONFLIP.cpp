#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int G;
    std::cin >> G;
    /*
      ======================================
        Little Elephant was fond of inventing
        new games. After a lot of research,
        Little Elephant came to know that most
        of the animals in the forest were showing
        less interest to play the multi-player
        games. Little Elephant had started to
        invent single player games, and succeeded
        in inventing the new single player game
        named COIN FLIP.

        In this game the player will use N coins
        numbered from 1 to N, and all the coins
        will be facing in "Same direction" (Either
        Head or Tail), which will be decided by
        the player before starting of the game.

        The player needs to play N rounds. In the
        k-th round the player will flip the face
        of the all coins whose number is less than
        or equal to k. That is, the face of coin
        i will be reversed, from Head to Tail, or,
        from Tail to Head, for i ≤ k.

        Elephant needs to guess the total number of
        coins showing a particular face after playing
        N rounds. Elephant really becomes quite fond
        of this game COIN FLIP so Elephant plays
        G times. Please help the Elephant to find
        out the answer.
      ======================================
    */
    for (int i = 0; i < G; i += 1) {
      long long I, N, Q;
      std::cin >> I >> N >> Q;
      int answer = N % 2 == 0 || I == Q ? N / 2 : (N + 1) / 2;
      std::cout << answer << std::endl;
    }
  }
  return 0;
}
