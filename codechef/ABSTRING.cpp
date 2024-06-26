#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N; std::string S;
    std::cin >> N;
    std::cin >> S;
    /*
      ======================================
        Alice and Bob are playing a game.
        They have a common string S of length
        N. The players also have their individual
        strings A (belonging to Alice) and
        B (belonging to Bob) which are empty
        in the beginning. Game begins with
        Alice and both players take alternate
        turns.

        In her/his turn, the player picks a
        single character from string S, adds
        it to the end of their individual
        string and deletes the picked character
        from the string S.

        The game continues until string S is
        empty. Find whether there exists a
        sequence of moves such that the strings
        A and B are same at the end of the game.
      ======================================
    */
   auto D = std::set(std::begin(S), std::end(S)); std::vector<int> F (D.size()); std::transform(std::begin(D), std::end(D), std::begin(F), [S](auto const &d) { return std::count(std::begin(S), std::end(S), d); });
   bool condition = std::all_of(std::begin(F), std::end(F), [](auto const &f) { return f % 2 == 0; });
   std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
