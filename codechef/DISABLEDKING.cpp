#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        Chef loves Chess and has thus invented
        a new piece named "Disabled King". Let's
        denote the cell at the intersection of
        i-th column from the left and j-th row
        from the top by (i, j). If he is
        currently in cell (x, y), the disabled
        king can move to the following positions
        in one move (provided that he remains
        in the chessboard):

        (x, y + 1)
        (x, y - 1)
        (x + y, y + 1)
        (x + y, y - 1)
        (x - y, y + 1)
        (x - y, y - 1)

        In short, the Disabled King cannot move
        horizontally. In an NxN chessboard, the
        Disabled King is currently situated at
        the top left corner (cell (1, 1)) and
        wants to reach the top-right corner (cell
        (N, 1)). Determine the minimum number of
        moves in which the task can be accomplished.
      ======================================
    */
    int answer = N % 2 == 0 ? N : (N - 1);
    std::cout << answer << std::endl;
  }
  return 0;
}
