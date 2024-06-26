#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int Sa, Sb, Sc;
    std::cin >> Sa >> Sb >> Sc;
    /*
      ======================================
        There are 3 problems in a contest called
        A, B and C. Sa, Sb, Sc denote successful
        submissions of the problems A, B, C respectively.
        It is guaranteed that each problem has a different
        number of submissions, we need to determine
        which problem is the hardest.

        Hardest = one with least number of submissions.

        Alice bets that problem C is hardest.
        Bob bets that problem B is hardest.
        We need to output who wins the bet.
      ======================================
    */
    int minimum = std::min({Sa, Sb, Sc});
    if (minimum == Sa) std::cout << "Draw" << std::endl;
    if (minimum == Sb) std::cout << "Bob" << std::endl;
    if (minimum == Sc) std::cout << "Alice" << std::endl;
  }
  return 0;
}
