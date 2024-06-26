#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  /*
    ======================================
      We have a chessboard with N rows and
      M columns. In one step, Suzumo can choose
      two cells of chessboard which share a common
      edge (that has not been cut yet) and cut
      this edge.

      Formally the chessboard is split into two or
      more pieces if it is possible to partition
      its cells into two non-empty subsets S1 and S2
      (S1 intersection S2 is not empty and |S1| + |S2| = NM)
      such that there is no pair of cells c1, c2
      (c1 belongs to S1 and c2 belongs to S2) which share
      a common edge that has not been cut.

      Suzumo does not want the board to split into
      two or more pieces. We need to compute the maximum
      number of steps that he can perform while satisfying
      the condition.
    ======================================
  */
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int N, M;
    std::cin >> N >> M;
    /*
      ======================================
        N is number of rows, N is number of
        columns. We need ask ourselves these
        questions (by looking at example explanations):

        * How many cuts can we make per row?
          (in the direction from left to right): M - 1
        * How many such rows are present? : N - 1

        So how many safe cuts can you make: (N - 1) * (M - 1)
      ======================================
    */
    int answer = (M - 1) * (N - 1);
    std::cout << answer << std::endl;
  }
  return 0;
}
