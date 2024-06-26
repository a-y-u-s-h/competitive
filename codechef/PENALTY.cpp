#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int A1, A3, A5, A7, A9;
    int A2, A4, A6, A8, A10;
    std::cin >> A1 >> A2 >> A3 >> A4 >> A5 >> A6 >> A7 >> A8 >> A9 >> A10;

    /*
      ======================================
        We're given 10 integers: Ai, i from 1 to 10.
        If i is odd, then Ai represents scores by 1st team.
        If i is even, then Ai represents scores by 2nd team.

        We need to tell who won (who scored more 1s).
        We need to output 0 if it's a draw, 1 if team 1 wins
        and 2 if team 2 wins.
      ======================================
    */
    std::vector<int> T1 = {A1, A3, A5, A7, A9};
    std::vector<int> T2 = {A2, A4, A6, A8, A10};
    int S1 = std::accumulate(std::begin(T1), std::end(T1), 0);
    int S2 = std::accumulate(std::begin(T2), std::end(T2), 0);

    if (S1 == S2) std::cout << 0 << std::endl;
    if (S1 > S2) std::cout << 1 << std::endl;
    if (S1 < S2) std::cout << 2 << std::endl;
  }
  return 0;
}
