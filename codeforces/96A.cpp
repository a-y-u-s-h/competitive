#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  std::string S;
  std::cin >> S;
  /*
    ======================================
      Petya loves football very much. One
      day, as he was watching a football
      match, he was writing the players'
      current positions on a piece of paper.

      To simplify the situation he depicted
      it as a string consisting of zeroes and
      ones. A zero corresponds to players of
      one team; a one corresponds to players
      of another team. If there are at least
      7 players of some team standing one after
      another, then the situation is considered
      dangerous. For example, the situation
      00100110111111101 is dangerous and
      11110111011101 is not. You are given
      the current situation. Determine
      whether it is dangerous or not.
    ======================================
  */
  char current = S[0]; int count = 1, maximum = 0;

  for (int i = 1; i < S.size(); i += 1) {
    if (current == S[i]) { count++; maximum = std::max(count, maximum); }
    if (current != S[i]) { maximum = std::max(count, maximum); count = 1; current = S[i]; }
  }

  bool condition = maximum >= 7;
  std::cout << (condition ? "YES" : "NO") << std::endl;
  return 0;
}
