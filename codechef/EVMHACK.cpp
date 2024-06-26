#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    double A, B, C, P, Q, R;
    std::cin >> A >> B >> C >> P >> Q >> R;
    /*
      ======================================
        There are three cities and thus three
        EVMs. An insider told Chef that his
        party got A,B,C votes respectively in
        these three cities according to the EVMs.
        Also, the total number of votes cast are
        P, Q, R respectively for the three cities.

        Chef, being the party leader, can hack
        at most one EVM so that his party wins.
        On hacking a particular EVM all the votes
        cast in that EVM are counted in favor
        of Chef's party.

        A party must secure strictly more than
        half of the total number of votes cast
        in order to be considered the winner.
        Can Chef achieve his objective of
        winning by hacking at most one EVM?
      ======================================
    */
    double requirement = (P + Q + R) / 2;
    bool condition =  (P + B + C > requirement) || (A + Q + C > requirement) || (A + B + R > requirement);
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
