#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int A, B, C, D;
    std::cin >> A >> B >> C >> D;
    /*
      ======================================
        Nitin and Sobhagya were playing a game
        with coins. If Sobhagya has more coins
        then he is winning, otherwise Nitin is
        winning. Note that this means if both
        Nitin and Sobhagya have the same number
        of coins, then Nitin is winning.

        Initially Nitin has A coins while Sobhagya
        has B coins. Then Ritik came and gave his
        C coins to the player who is not winning
        currently, after which Satyarth came and
        repeated the same process (gave his D coins
        to the player who is not winning currently).

        Find the final winner of the game.
      ======================================
    */
   A >= B ? B += C : A += C;
   A >= B ? B += D : A += D;
   std::cout << (A >= B ? "N" : "S") << std::endl;
  }
  return 0;
}
