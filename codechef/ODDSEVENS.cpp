#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int A, B;
    std::cin >> A >> B;
    /*
      ======================================
        Alice and Bob play the classic game
        of odds and evens. In this game,
        each of the two players choose a
        number between 1 and 5 without revealing
        to their opponent. Both of the players
        then simultaneously reveal their number
        by holding up that many fingers of their
        hand. Then the winner is decided based
        upon whether the sum of numbers played
        by both the players is odd or even.

        In this game we assume that if the sum
        is odd then Alice wins, otherwise Bob wins.
        A and B are two integers that denote
        the number played by Alice and Bob
        respectively.
      ======================================
    */
    std::string answer = (A + B) % 2 == 0 ? "BOB" : (A + B) % 2 != 0 ? "ALICE" : "";
    std::cout << answer << std::endl;

  }
  return 0;
}
