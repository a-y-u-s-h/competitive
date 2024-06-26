#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    std::string H, G;
    std::cin >> H;
    std::cin >> G;
    /*
      ======================================
        There is a hidden word H and a guess
        word G, both of length 5. Chef defines
        a string M to determine the correctness
        of the guess word. For the ith index:

        1. If the guess at the ith index is
        correct, the ith character of M is G.
        2. If the guess at the ith index is
        wrong, the ith character of M is B.

        Given the hidden word H and guess G,
        determine string M.
      ======================================
    */

    std::string answer (5, ' ');
    for (int i = 0; i < 5; i += 1) { answer[i] = G[i] == H[i] ? 'G' : 'B'; }
    std::cout << answer << std::endl;
  }
  return 0;
}
