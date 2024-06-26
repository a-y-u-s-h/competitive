#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    double N, K;
    std::cin >> N >> K;
    /*
      ======================================
        N candidates (numbered 1 to N) join
        Chef's firm. Thr first 5 candidates
        join on the first day, and then, on
        every subsequent day, the next 5
        candidates join in.

        Candidates numbered K decided to turn
        down his offer and thus, Chef adjusts
        the position by shifting up all the
        higher numbered candidates. This leads
        to a change in the joining day of
        some of the candidates. Helkp Chef
        determine the number of candidates
        who will join on a different day than
        expected.
      ======================================
    */
    int answer = std::ceil(N / 5) - std::ceil(K / 5);
    std::cout << answer << std::endl;
  }
  return 0;
}
