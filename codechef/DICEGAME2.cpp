#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int A1, A2, A3, B1, B2, B3;
    std::cin >> A1 >> A2 >> A3 >> B1 >> B2 >> B3;
    /*
      ======================================
        Alice and Bob are playing a game. Each
        player rolls a regular six faced dice
        3 times. The score of a player is the
        sum of the values of the highest 2 rolls.
        The player with the highest score wins,
        and the game ends in a Tie if both players
        have the same score. Find the winner of
        the game or determine whether it is a tie.
      ======================================
    */
    std::vector<int> A = { A1, A2, A3 };
    std::vector<int> B = { B1, B2, B3 };
    std::sort(std::begin(A), std::end(A));
    std::sort(std::begin(B), std::end(B));
    int Sa = A[1] + A[2];
    int Sb = B[1] + B[2];
    std::string answer = Sa > Sb ? "Alice" : Sa < Sb ? "Bob" : "Tie";
    std::cout << answer << std::endl;
  }
  return 0;
}
