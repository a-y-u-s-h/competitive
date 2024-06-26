#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int G1, S1, B1, G2, S2, B2;
    std::cin >> G1 >> S1 >> B1 >> G2 >> S2 >> B2;
    /*
      ======================================
        G1, S1, B1, G2, S2, B2 represent gold,
        silver and bronze metals won by two
        different countries respectively in Olympics.
        Determine which country is ranked better
        on leaderboard. It is guaranteed that there
        will not be a tie between these two.

        Ranking depends only on total medals obtained
        by the country. So we just need to find the totals.
      ======================================
    */
    int T1 = G1 + S1 + B1;
    int T2 = G2 + S2 + B2;
    if (T1 > T2) std::cout << 1 << std::endl;
    if (T2 > T1) std::cout << 2 << std::endl;
  }
  return 0;
}
