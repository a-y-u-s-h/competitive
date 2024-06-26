#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N;
    std::cin >> N;
    std::vector<long long> A;
    for (long long n = 0; n < N; n++) { long long Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        Chef and Roma are playing a game. Rules
        of the game are quite simple. Initially,
        there are N piles of stones on the table.
        In each turn, a player can choose one
        pile and remote it from the table. Each
        player want to maximize the total number
        of stones removed by him. Chef takes
        the first turn.

        Please tell Chef the maximum number
        of stones he can remove assuming that
        both players play optimally.
      ======================================
    */
    std::sort(std::begin(A), std::end(A));
    long long answer = 0;
    for (auto Ai = std::rbegin(A); Ai != std::rend(A); Ai += 1) { if ((Ai - std::rbegin(A)) % 2 == 0) answer += *Ai; }
    std::cout << answer << std::endl;
  }
  return 0;
}
