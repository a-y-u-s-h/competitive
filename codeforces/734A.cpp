#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N; std::string S;
  std::cin >> N;
  std::cin >> S;
  /*
    ======================================
      Anton likes to play chess, and so
      does his friend Danik. Once they have
      played N games in a row. For each game
      it's known who was the winner — Anton
      or Danik. None of the games ended with a tie.

      Now Anton wonders, who won more games,
      he or Danik? Help him determine this.
    ======================================
  */
  int Ca = std::count(std::begin(S), std::end(S), 'A');
  int Cd = std::count(std::begin(S), std::end(S), 'D');
  std::string answer = Ca > Cd ? "Anton" : Cd > Ca ? "Danik" : "Friendship";
  std::cout << answer << std::endl;
  return 0;
}
