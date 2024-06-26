#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> A;
    /*
      ======================================
        Chef is participating in an ICPC
        regional contest, in which there is
        a total of N problems (numbered 1 through N)
        with varying difficulties. For each
        valid i, the i-th easiest problem is Ai.

        After a team solves a problem, a balloon
        with a colour representing that problem
        is tied next to their desk. Chef is
        fond of colors in VIBGYOR, which are
        representative of the problems with
        numbers 1 through 7. The remaining
        problems have their own representative
        colours too.

        Find the minimum number of problems
        which Chef's team needs to solve in
        order to get all the balloons for
        problems 1 through 7 (and possibly some
        other balloons too) tied next to their
        desk, if you know that Chef's team
        knows the difficulties of all problems
        and solves the problems in increasing
        order of difficulty.
      ======================================
    */

    int solved = 0, objective = 7;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; if (Ai <= 7) { objective--; solved++; } else if (objective > 0) { solved++; }; }
    std::cout << solved << std::endl;
  }
  return 0;
}
