#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, S;
    std::cin >> N >> S;
    std::vector<int> P, A;
    for (int n = 0; n < N; n++) { int Pi; std::cin >> Pi; P.push_back(Pi); }
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        Chef is going to start playing Fantasy
        Football League (FFL) this season. In
        FFL, each team consists of exactly 15 players:
        2 goalkeepers, 5 defenders, 5 midfielders and
        3 forwards. Chef has already bought 13 players;
        he is only missing one defender and one forward.

        There are N available players (numbered
        1 through N). For each valid i, the i-th
        player is either a defender or a forward and
        has a price Pi. The sum of prices of all
        players in a team must not exceed 100 dollars
        and the players Chef bought already cost
        him S dollars.

        Can you help Chef determine if he can
        complete the team by buying one defender
        and one forward in such a way that he
        does not exceed the total price limit?

        Resource available to us is 100 - S.
        We want A and B from P such that,
        A + B <= 100 - S.
      ======================================
    */

    bool condition = false; bool flag = false;

    for (auto Pi = std::begin(P); Pi != std::end(P); Pi += 1) {
      int i = Pi - std::begin(P);
      for (auto Pj = std::begin(P); Pj != std::end(P); Pj += 1) {
        int j = Pj - std::begin(P);
        if (Pi < Pj && *Pi + *Pj <= 100 - S && A[i] != A[j]) { condition = true; break; }
      }
      if (flag) break;
    }

    std::cout << (condition ? "yes" : "no") << std::endl;

  }
  return 0;
}
