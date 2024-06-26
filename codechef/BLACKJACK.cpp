#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int A, B;
    std::cin >> A >> B;
    /*
      ======================================
        Chef is playing a variant of Blackjack,
        where 3 numbers are drawn and each
        number lies between 1 and 10 (with both
        1 and 10 inclusive). Chef wins the game
        when the sum of these 3 numbers is exactly 21.

        Given the first two numbers A and B, that
        have been drawn by Chef, what should be 3-rd
        number that should be drawn by the Chef in
        order to win the game?

        Note that it is possible that Chef cannot win
        the game, no matter what is the 3-rd number.
        In such cases, report −1 as the answer.
      ======================================
    */
    std::vector<int> R (10); std::iota(std::begin(R), std::end(R), 1);
    int answer = std::count(begin(R), end(R), (21 - A - B)) > 0 ? (21 - A - B) : -1;
    std::cout << answer << std::endl;
  }
  return 0;
}
